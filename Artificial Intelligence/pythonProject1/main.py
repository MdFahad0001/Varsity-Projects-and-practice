import random


def guess_the_number():
    # Generate a random number between 1 and 100
    secret_number = random.randint(1, 100)

    # Initialize the number of guesses to 0
    num_guesses = 0

    while True:
        # Prompt the user to guess the number
        guess = int(input("Guess the number (between 1 and 100): "))
        num_guesses += 1

        # Check if the guess is correct
        if guess == secret_number:
            print(f"Congratulations, you guessed the number in {num_guesses} guesses!")
            break
        elif guess < secret_number:
            print("This number is too low , please try again.")
        else:
            print("This number is too high , please  try again.")


# Start the game
guess_the_number()