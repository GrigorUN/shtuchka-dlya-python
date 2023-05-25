import telebot

bot = telebot.TeleBot("токен")

@bot.message_handler(content_types={"text"})
def repearter(message):
    bot.send.message(message.chat.id, message.text)

if __name__ == '__main__':
    bot.infinity_polling()