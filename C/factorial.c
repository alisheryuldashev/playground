/*
This is a simple recursive function written in C that finds the factorial of n. 
Factorial is a product of every positive integer that less than and equal to n. 
For example, factorial 3 (3!) is 3 * 2 * 1 to give 6.
Recursion makes this code look more elegant and concise compared to using loops. Recursion is just sexy :)
*/

#include <stdio.h>
#include <stdlib.h>

//find factorial recursively
int fact(n)
{
    if (n == 1) // base case to ensure recursive function does not return itself infinitely
        return 1;
    else 
        return n * fact(n - 1); // recursive call where every n returns n of n - 1
}

int main (void)
{
    printf("%i\n", fact(3)); //prints results of factorial of 3, i.e. 3*2*1 = 6
}
