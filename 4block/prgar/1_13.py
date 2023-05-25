from turtle import*
score_1 = 0 # Баллы первого игрока
score_2 = 0 # Баллы второго игрока

penup() # Поднимаем перо для перемещения

goto(-300,200) # Перемещаемся в левый верхний угол для первого игрока
write("Ответы первого игрока", font=("Arial", 14, "normal")) # Выводим информацию
goto(-300,100) # Перемещаемся ниже для второго игрока
write("Ответы для второго игрока", font=("Arial", 14, "normal")) # Выводим информацию

ans_1 = textinput("Задание 1", "Сколько месяцев в году имеет 28 дней?")
if ans_1 == 12:
    res = "+"
    score_1 += 1
    goto(-300,180)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,180)
    write(res,font=("Arial", 14, "normal"))



ans_2 = textinput("Задание 2", "Сколько букв в русском алфавите?")
if ans_2 == 33:
    res = "+"
    score_2 += 1
    goto(-300,80)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,80)
    write(res,font=("arial", 14, "normal"))



ans_1 = textinput("Задание 3", "Какое слово всегда пишетсяч неправильно?")
if ans_1 == "неправильно":
    res = "+"
    score_1 += 1
    goto(-300,160)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,160)
    write(res,font=("arial", 14, "normal"))



ans_2 = textinput("Задание 4", "Какого камня не существует в море?")
if ans_2 == "сухого":
    res = "+"
    score_2 += 1
    goto(-300,60)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,60)
    write(res,font=("arial", 14, "normal"))\



    ans_1 = textinput("Задание 5", "Какая река самая страшная?")
if ans_1 == "тигр":
    res = "+"
    score_1 += 1
    goto(-300,140)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,140)
    write(res,font=("arial", 14, "normal"))



ans_2 = textinput("Задание 6", "сколько месяцев длится учебный год?")
if ans_2 == 9:
    res = "+"
    score_2 += 1
    goto(-300,40)
    write(res,font=("Arial", 14, "normal"))
else:
    res = "x"
    goto(-300,40)
    write(res,font=("arial", 14, "normal"))



if score_1 > score_2:
    goto(0,0)
    write("Выиграл первый игрок", font=("Arial", 14, "normal"))
elif score_1 == score_2:
    goto(0,0)
    write("Ничья", font=("Arial", 14, "normal"))
else:
    goto(0,0)
    write("Выиграл второй игрок", font=("arial", 14, "normal"))

exitonclick()
