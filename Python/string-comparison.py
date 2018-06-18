#this snippet will prompt for two inputs to compare them and output if they are identical or not. 

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_string

s = get_string("type your first message: ")
t = get_string("type your second message: ")

if s == t:
    print("your inputs are the same")
else:
    print("your inputs are different")
