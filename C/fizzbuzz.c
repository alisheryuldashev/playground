/*
Here is a quick snippet in C of the fizz buzz question where you have to write a program that prints the numbers from 1 to 100. 
But for multiples of three you print “Fizz” instead of the number and for the multiples of five you print “Buzz”. 
For numbers which are multiples of both three and five you print “FizzBuzz".
*/

#include <stdio.h>
#include <stdlib.h> //standard library

int main (void)
{
    for (int i = 1; i <= 100; i++) //initialize counter from 1 to 100
    {
        if (i % 5 == 0 && i % 3 == 0) //use modulus for multiples of 3 and 5 and print fizzbuzz
        {
            printf("FizzBuzz\n");
        }
        if (i % 3 == 0) //print fizz for multiple of 3
        {
            printf("Fizz\n");
        }
        if (i % 5 == 0) //print buzz for multiple of 5
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n", i);//otherwise print the number
        }
}
}
