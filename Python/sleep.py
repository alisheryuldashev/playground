#this snippet imports sleep function and returns n*2 integers with a 0.5 second interval. 

from time import sleep

i = 1
while True:
    print(i)
    i *= 2
    sleep(0.5)
