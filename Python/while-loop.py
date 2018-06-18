#this snippet prompts for a positive integer using a while loop until such integer is provided. 

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_int

def main():
    i = get_positive_int("positive integer, please: ")
    print(i)

def get_positive_int(prompt):
    while True:
        n = get_int(prompt)
        if n >=1:
            return n

if __name__ == "__main__":
    main()
