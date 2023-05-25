file = open('file_game.txt')
s = file.read()
print(s)
file.close()

with open('file_game.txt') as file:
    for line in file:
        print(line, end="")