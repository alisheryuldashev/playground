#this snippet shows how if statement works 

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_char

c = get_char("answer: ")

if c == "Y" or c == "y":
    print("yep")
elif c == "N" or c == "n":
    print("nope")
