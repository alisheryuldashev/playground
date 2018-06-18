#this snippet shows how to create a class in Python. 
#this program will prompt for information, append same into a class, and output a message.

#create a class called Student
class Student:
    def __init__(self,name,dorm):
        self.name = name
        self.dorm = dorm
        

#prompt user for information and append it to the class called Student

#import custom functions from CS50 library used in Harvard Introduction to Computer Science course. 
from cs50 import get_string
#import class Student
from test14class import Student

students = []
dorms = []

for i in range(3):
    name = get_string("Name: ")
    dorm = get_string("Dorm: ")
    s = Student(name, dorm)
    students.append(s)

for student in students:
    print(f"{student.name} lives in {student.dorm}")
