/*
This code snippet helped me to understand pointers in C better.
swap-numbers-in-C this is a short code snippet to swap two numbers using pointers.
*/

#include <stdio.h>

//create a prototype for a swapping function. Notice we use pointers in the arguments. Why? Because when a pointer is passed as an argument to a function, address of the memory location is passed instead of the value. This will be explained down below. 
void swap(int *numbr1, int *numbr2);

//start of the main function
int main()
{
    //declare two numbers;
    int numbr1 = 9, numbr2 = 19;
    
    //swap two numbers and print them
    swap(&numbr1, &numbr2);
    printf("numbr1 = %d\n", numbr1);
    printf("numbr2 = %d\n", numbr2);
    return 0;
}

//implement the swap function. This is where pointers do the trick. Otherwise, if you used just values, it wouldn't have any impact on your main function 
void swap(int *numbr1, int *numbr2)
{
    int temp;
    temp = *numbr1;
    *numbr1 = *numbr2;
}
