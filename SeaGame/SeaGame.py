from Engine import Game
import time
import os


def greet():

    print("*"*20)
    print("---Морской бой---")
    print("*"*20)
    print("Loading..")
    for i in range(4):
        time.sleep(1)
        print (".")
    time.sleep(3.5)
    os.system('cls')

greet()
start_game = Game() # Init

start_game.start() # Start our game
