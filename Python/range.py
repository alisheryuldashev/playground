#this snippet shows how to use /range/ in for loop in Python. It prompts for n and returns n rows with n "#" symbols per row. 

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_int

while True:
    n = get_int("Number: ")
    if n > 0:
        break

for i in range(n):
    for j in range (n):
        print("#", end="")
    print()
