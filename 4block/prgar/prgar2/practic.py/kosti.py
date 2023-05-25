import random

def roll_dice():
    return random.randint(1, 6)

def play_game():
    player1_name = input("Введите имя первого игрока: ")
    player2_name = input("Введите имя второго игрока: ")

    player1_score = 0
    player2_score = 0

    rounds = int(input("Сколько раундов вы хотите сыграть? "))

    for round in range(1, rounds + 1):
        print(f"\nРаунд {round} начинается!")

        input(f"\nХод игрока {player1_name} (нажмите Enter, чтобы бросить кости)")
        player1_roll = roll_dice()
        print(f"Игрок {player1_name} выбросил: {player1_roll}")
        player1_score += player1_roll

        input(f"\nХод игрока {player2_name} (нажмите Enter, чтобы бросить кости)")
        player2_roll = roll_dice()
        print(f"Игрок {player2_name} выбросил: {player2_roll}")
        player2_score += player2_roll

        print("\nТекущий счет:")
        print(f"{player1_name}: {player1_score}")
        print(f"{player2_name}: {player2_score}")

    print("\nИгра окончена!")

    if player1_score > player2_score:
        print(f"Игрок {player1_name} победил!")
    elif player2_score > player1_score:
        print(f"Игрок {player2_name} победил!")
    else:
        print("Ничья!")

play_game()