#this snippet shows how to add arguments and returns "hello, [your name] if you enter your name as an argument. 
#(example: python arguments.py Alisher command will return hello, Alisher)

import sys

if len(sys.argv) == 2:
    print(f"hello, {sys.argv[1]}")

