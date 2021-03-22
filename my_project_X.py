print("My game attempt #2\n")

field = [[" "] * 3 for i in range(3)]
counter = 0


def Show():
    print("-----------------")
    print(f"|x/y| 0 | 1 | 2 |")
    for i in range(3):
        print(f"| {i} | {field[i][0]} | {field[i][1]} | {field[i][2]} |")
    print("-----------------")

def Ask():
    while True:
        x, y = map(int,input("Сделайте ход(x,y): ").split())

        if (0<= x <=2 and 0<= y <=2):
            if field[x][y] == " ":
                return x,y
                break
            else:
                print("Ячейка занята!")
        else:
            print("Вы вышли из диапазона! 0-2")


def checkwin():
    for i in range(3):
        WinSymbol = []
        for j in range(3):
            WinSymbol.append(field[i][j])
        if WinSymbol == ["X", "X", "X"]:
            print("Выиграл X!")
            return True

        elif WinSymbol == ["O", "O", "O"]:
            print("Выиграл O!")
            return True


 
    for i in range(3):
        WinSymbol = []
        for j in range(3):
            WinSymbol.append(field[j][i])
        if WinSymbol == ["X", "X", "X"]:
            print("Выиграл X!")
            return True

        elif WinSymbol == ["O", "O", "O"]:
            print("Выиграл O!")
            return True


    WinSymbol = []
    for i in range(3):

        WinSymbol.append(field[i][2-i])
        if WinSymbol == ["X", "X", "X"]:
            print("Выиграл X!")
            return True

        elif WinSymbol == ["O", "O", "O"]:
            print("Выиграл O!")
            return True

    WinSymbol = []
    for i in range(3):
        WinSymbol.append(field[i][i])
        if WinSymbol == ["X", "X", "X"]:
            print("Выиграл X!")
            return True


        elif WinSymbol == ["O", "O", "O"]:
            print("Выиграл O!")
            return True


    return False



while True:
    Show()
    if counter % 2 == 0:
        print("Ходит Х: ")
    else: 
        print("Ходит О: ")

    x,y = Ask()

    if counter % 2 == 0:
        field[x][y] = 'X'
    else:
        field[x][y] = 'O'
    if checkwin():
        Show()
        break
       

    counter +=1
    if counter >= 9:
        print("Ничья!")
        break



