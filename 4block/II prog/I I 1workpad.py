
def task1_3():
    x = 5>= 2;
    A = {1,3,7,8}
    B = { 2,4,5,10, 'apple'}
    C = A & B
    df = 'Антонова Антонина',34, 'ж'
    z='type'
    D = [1,'title', 2, 'content']

    print(x)
    print(type(A))
    print(type(B))
    print(type(C))
    print(type(df))
    print(type(z))
    print(type(D))


def task2_3():
    x=int(input())
    if -5>x:
        print('(-infinity, - 5)')
    if x>=-5 and x<=5:
        print('[-5,5]')
    if x>5:
        print('(5, +infinity)')

def task3_3_1():
    x=10
    while x >=1:
        print(x)
        x-=3

def task3_3_2():
    print('Имя, Фамилия, Возраст, Вес, Рост')

def task3_3_3():
    x = 2
    while x<=25:
        print(x)
        x+=1

def task3_3_4():
    for i in range(105, 4, -25):
        print(i)

def task3_3_5():
    x = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    x[0::2] = reversed(x[0::2])
    print(x)

    
    
def task4_3_1():
    import random
    import statistics
    import matplotlib.pyplot as plt

    # Генерация массива случайных значений из интервала (0,1)
    random_array = [random.random() for i in range(100)]

    # Вычисление среднего значения массива
    mean_value = sum(random_array) / len(random_array)

    # Вычисление медианного значения массива
    median_value = statistics.median(random_array)

    print("Среднее значение: ", mean_value)
    print("Медианное значение: ", median_value)

    # Построение точечной диаграммы рассеивания полученного ряда
    plt.scatter(range(len(random_array)), random_array)
    plt.show()

    
# def task4_3_2():
#     import numpy as np
#     import math
#     import matplotlib.pyplot as plt
#     from math import sqrt
#     from math import cos
#     from math import sin

#     # создаем массив значений х, изменяющихся от 1 до 10
#     x = np.arange(1, 11)

#     # вычисляем массив значений функции для каждого x
#     y = (sqrt(1+(math.e**(x)) + math.cos(x)))/ (abs(1-sin**3(x)))

#     # выделяем срез первой половины массива
#     x_half = x[:5]
#     y_half = y[:5]

#     # строим график для основного массива
#     plt.plot(x, y, label='Main array')

#     # строим точечный график для среза
#     plt.plot(x_half, y_half, 'ro', label='First half')

#     # добавляем легенду
#     plt.legend()

#     # отображаем график
#     plt.show()

def task4_3_4():
    import pandas as pd
    import matplotlib.pyplot as plt
    from pandas_datareader import data
    import yfinance as yf

    # Определение символов акций
    символы = ['AAPL']

    # Извлечение данных акций из yahoo finance за последние 12 месяцев
    начальная_дата = '2021-02-12'
    конечная_дата = '2022-02-12'
    данные_акций = yf.download(символы, start=начальная_дата, end=конечная_дата)['Adj Close']

    # Построение данных
    данные_акций.plot(figsize=(15, 6))
    plt.xlabel('Дата')
    plt.ylabel('Откорректированная цена закрытия')
    plt.title('Откорректированная цена закрытия акций Apple')
    plt.legend(символы)
    plt.show()



def task4_3_5():
    import math

    def calculator(x, y, operator):
        if operator == '1':
            return x + y
        elif operator == '2':
            return x - y
        elif operator == '3':
            return x * y
        elif operator == '4':
            return x / y
        elif operator == '5':
            return math.exp(x + y)
        elif operator == '6':
            return math.sin(x + y)
        elif operator == '7':
            return math.cos(x + y)
        elif operator == '8':
            return x ** y
        else:
            return "Ошибка!"

    x = float(input("Введите x: "))
    y = float(input("Введите y: "))
    operator = input("Выберите действие: \n 1: + \n 2: - \n 3: * \n 4: / \n 5: e^(x+y) \n 6: sin(x+y) \n 7: cos(x+y) \n 8: x^y \n ")

    print("Result:", calculator(x, y, operator))
