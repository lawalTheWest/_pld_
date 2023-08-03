#!/usr/bin/python3
def print_last_digit(number):
    # get the last digit using the modulus
    last_digit = (abs(number) % 10)
    print(last_digit, end="")
    return (last_digit)
