import random
import string

def generate_password(length, use_uppercase=True, use_lowercase=True, use_digits=True, use_symbols=True):
    # Define the character set to use for the password
    chars = ''
    if use_uppercase:
        chars += string.ascii_uppercase
    if use_lowercase:
        chars += string.ascii_lowercase
    if use_digits:
        chars += string.digits
    if use_symbols:
        chars += string.punctuation

    # Generate a random password by selecting 'length' characters from the character set
    password = ''.join(random.choice(chars) for _ in range(length))

    return password

# Prompt the user to specify password options
length = int(input("Enter password length: "))
use_uppercase = input("Use uppercase letters? (y/n): ").lower() == 'y'
use_lowercase = input("Use lowercase letters? (y/n): ").lower() == 'y'
use_digits = input("Use digits? (y/n): ").lower() == 'y'
use_symbols = input("Use symbols? (y/n): ").lower() == 'y'

# Generate a random password with the specified options
password = generate_password(length, use_uppercase, use_lowercase, use_digits, use_symbols)

print('Your password is:', password)
