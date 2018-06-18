#this snippet show how main() function is defined and called in Python

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course.
from cs50 import get_int

def main():

    i = get_int("integer: ")
    print(f"you entered number: {i}")

if __name__ == "__main__":
    main()
