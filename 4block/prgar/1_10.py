# for i in 1,2,3:
#     print(i)


from turtle import*
count = int(input("Введите кол-во фигур "))
penup()
goto(-320,0)
pendown()
for i in range(count):
    forward(50)
    left(90)
    forward(30)
    left(90)
    forward(40)
    right(90)
    forward(30)
    right(90)
    forward(90)
    right(90)
    forward(30)
    right(90)
    forward(40)
    left(90)
    forward(30)
    left(90)
    forward(50)
exitonclick()

# for i in range(1, 5):
#     print(i)
