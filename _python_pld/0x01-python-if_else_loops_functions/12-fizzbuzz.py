#!/usr/bin/python3
"""

For multiples of three print Fizz instead of the number and for multiples of five print Buzz .

For numbers which are multiples of both three and five print FizzBuzz .

Prototype: def fizzbuzz():

Each element should be followed by a space

You are not allowed to import any module
"""

def fizzbuzz():
    num = 1
    while (num in range(1, 101)):
        if (num % 3 == 0 and num % 5 == 0):
            print("FizzBuzz", end="")
        elif (num % 3 == 0):
            print("Fizz", end="")
        elif (num % 5 == 0):
            print("Buzz", end="")
        else:
            print(f"{num}", end="")
        num += 1
