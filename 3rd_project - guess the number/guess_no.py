import random

number=random.randint(1,100)
no_attempts=1
player_attempts = {}

def get_guess(player):
    print(f"player[{player}]:attempt-{no_attempts}")
    user_guess = input("Guess the number (1,100): ")
    try:
        user_guess=int(user_guess)
        get_hint(user_guess,player)
        return
    except:
        print("\n!! please enter a number")
        return get_guess(player)
    
def get_hint(user_guess,player):
    global no_attempts
    no_attempts+=1
    if user_guess>number:
        print("Too high")
        return get_guess(player)
    elif user_guess<number:
        print("Too low")
        return get_guess(player)
    else:
        print("!! You guessed it!")
        print(f"Total {no_attempts} attempts ")
        junction(player)
        
        
def junction (player):
    global number
    global no_attempts
    if no_players==1:
        ask=input("what to play one more time (y/n) ? ")
        if ask=="y":
            return get_guess(player)
        else:
            print("Thank you for playing")
            exit()
    else:
        print(f"player [{player}]:attempts({no_attempts}) good try!\n\n")
        player_attempts.update({player: no_attempts})
        number=random.randint(1,100)
        no_attempts=1
        return 
    
def get_winner():
    global player_attempts
    min_attempts = min(player_attempts.values())
    min_key = min(player_attempts, key=lambda x: player_attempts[x])
    print(f"THE WINNER IS PLAYER[{min_key}] WITH '{min_attempts}' ATTEMPTS")
    print(f"{player_attempts}")


def main():
    global no_players
    print("-----Welcome to the guess the number game-----")
    no_players=input("Number of players: ")
    if no_players.isdigit():
        no_players=int(no_players)
        pass
    else:
        print("\n!! please enter a number")
        main()
    for player in range(1,int(no_players)+1):
        get_guess(player)
    if no_players!=1:
        print("its time for results...")
        return get_winner()
main()
