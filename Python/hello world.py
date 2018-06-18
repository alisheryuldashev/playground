#this snippet should prompt for your name and return a string: "Hello, [your name]"

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. from cs50 import get_string 

s = get_string("name: ")
print("hello, {}".format(s))
