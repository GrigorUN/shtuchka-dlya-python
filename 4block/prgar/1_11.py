# a = int(input("Введите первое число "))
# b = int(input("Введите второе чиисло "))
# c = int(input("Введите третье число "))
# if a > b:
#     if a > c:
#         print("Наибольшее число", a)
#     else:
#         print("Наибольшее число", c)
# else:
#      if b > c:
#         print("Наибольшее число", b)
#     else:
#         print("Наибольшее число", b)


from turtle import*
from random import*
num = randint(0,1000)
print(num)
col = input("Выберите цыет: red или green ")
if num > 9 and num < 100:
    if col == 'red':
        color(col)
        width(3)
    elif col == 'green':
        color(col)
        width(5)
    forward(100)
    penup()
    goto(0,-50)
    pendown()
    forward(100)
elif num > 99 and num < 1000:
    if col == 'red':
        color(col)
        width(3)
    elif col == 'green':
        color(col)
        width(5)
    forward(100)
    penup()
    goto(0,-50)
    pendown()
    forward(100)
    penup()
    goto(0,-100)
    pendown()
    forward(100)
exitonclick()        


from turtle import*
from random import*
num = randint(1,10)
print(num)
col = input("Введите цвет: yellow или red ")
if num % 2 != 0:
    if col == "yellow":
        color(col)
        forward(50)
        left(90)
        forward(50)
        left(90)
        forward(50)
        left(90)
        forward(50)
        left(90)
    elif col == "red":
        color(col)
        forward(100)
        left(120)
        forward(100)
        left(120)
        forward(100)
exitonclick()


num = int(input())
if num >= 45:
    if num <= 65:
        print("ДА")
    else:
        print("НЕТ")
else:
    print("НЕТ")


from turtle import*
from random import*
num = randint(1,10)
print(num)
col = input("Введите цвет: yellow или red ")
if num % 2 == 0:
    if col == "yellow":
        color(col)
        forward(80)
        left(90)
        forward(30)
        left(90)
        forward(80)
        left(90)
        forward(30)
        left(90)
    elif col == "red":
        color(col)
        forward(60)
        left(120)
        forward(60)
        left(120)
        forward(60)
exitonclick()
