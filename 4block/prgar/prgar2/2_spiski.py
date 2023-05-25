# import random

# def display_board(board):
#     print("\t", board[0],"|", board[1],"|", board[2])
#     print("\t","----------")
#     print("\t", board[3],"|", board[4],"|", board[5])
#     print("\t","----------")
#     print("\t", board[6],"|", board[7],"|", board[8])

# board = ("1", "2", "3", "4", "5", "6", "7", "8", "9")
# display_board(board)


import random 

def display_board(board):
    print("\t","----------")
    for i in range(0, len(board)- 2,3):
        print("\t",board[i],"|", board[i+1],"|", board[i+2])
        print("\t","----------")

board = ("1", "2", "3", "4", "5", "6", "7", "8", "9")
display_board(board)
while True:
    random_slot = random.randint(0, len(board)-1)
    print("Вы видете что-то на земле. Подобрать? да/нет")
    pickup = input()
    if pickup == "да":
        board[random_slot] = "/"
        display_board(board)
        print("Вы подобрали палку.")
        break
    elif pickup == "нет":
        print("Вы ничего не подобрали.")
        break 
    else:
        print("Ошибка: невозможно обработать ответ. Введите 'да' или 'нет'")

              