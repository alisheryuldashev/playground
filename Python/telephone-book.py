#this snippet shows arrays in Python and prompts for your name to output this message: "calling, [your name]". 


import sys
from cs50 import get_string

book = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h"]

name = get_string("Name: ")
if name in book:
    print(f"calling {name}")
