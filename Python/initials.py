#this snippet will prompt for your name and output your initials 

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_string

s = get_string("name: ")
initials = ""
for c in s:
    if c.isupper():
        initials += c
print(initials)
