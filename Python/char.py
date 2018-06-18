#this snippet will take an argument and print each character of that string an a new line
#(example: python char.py command will print c h a r . p  y with every character displayting on a new line) 

import sys

for s in sys.argv:
    for c in s:
        print(c)
