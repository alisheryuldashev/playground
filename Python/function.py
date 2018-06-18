#this snippet shows how a new function defined in Python and returns a square of n

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_int

def main():
    x = get_int("x: ")
    print(square(x))

def square(n):
    """return square of n"""
    return n**2

if __name__ == "__main__":
    main()
