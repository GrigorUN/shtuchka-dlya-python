# import print_name
# print_name.print_name("Питоша")


# from tkinter import*

# def right_answer():
#     lbl.configure(text="Верно!")

# def wrong_answer():
#     lbl.configure(text="Ошибка!")

# window = Tk()
# window.title("Квиз")
# lbl = Label(window, text ="Питон - это", font = ("Roboto Bold", 20))
# btn = Button(window, text ="низкоуровневый язык программирования", command=wrong_answer)
# btn2 = Button(window, text ="высокоуровневый язык программирования", command=right_answer)
# lbl.grid(column=0, row=0)
# btn.grid(column=1, row=0)
# btn2.grid(column=1, row=1)
# window.mainloop()


from tkinter import*

def right_answer():
    lbl.configure(text="Верно!")

def wrong_answer():
    lbl.configure(text="Ошибка!")

window = Tk()
window.title("Квиз")
lbl = Label(window, text="Арбуз - это", font = ("Roboto Boldd", 20))
btn = Button(window, text="Фрукт", command=wrong_answer)
btn2 = Button(window, text="Ягода", command=right_answer)
btn3 = Button(window, text="Овощ", command=wrong_answer)
lbl.grid(column=0, row=0)
btn.grid(column=1, row=0)
btn2.grid(column=1, row=1)
btn3.grid(column=1, row=2)
window.mainloop()