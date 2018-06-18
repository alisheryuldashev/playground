/*
This is a simple console program that finds numbers' indices in an array of {1,3,55,2,5,78} and that showcases two algorithms written in C:
The first sorting algorithm - insertion sort - sorts the numbers in the array with the running time of O(n^2). The second searching algorithm - binary search - searches the numbers with the running time of O(logn).
*/

#include <cs50.h> //custom library used by me in CS50 Harvard Introduction to Computer Science program.
#include <stdio.h>
#include <stdlib.h>

int sort(int array[], int size)
{
    // TODO: implement an O(n^2) sorting algorithm
    //this is insertion sort
    for (int i = 0; i < size; i++) //we move the pointer to the right that incremented
    {
        for (int j = i; j > 0; j--) // because the elements on the pointer are not in sorted order, move another pointer frmo right to left exchanging larger elements to its left
        if (array[j] < array[j - 1]) // test the comparison
        {
            int k = array[j];
            array[j] = array[j - 1];
            array[j - 1] = k;
        }
    }
    return -1;
}
//binary search algorithm
int search(int array[], int size, int value)
{
    int i = 0;
    int min = i;
    while (min <= size)
    {
        int mid = min + (size - min) / 2;
        if (array[mid] == value) //check if your value is present in mid
        {
            return mid;
        }
        if (array[mid] < value) //if greater then ignore the left part
        {
            min = mid + 1;
        }
        else
        {
            size = mid - 1; //if smaller then ignore the right half
        }
    }
    return -1; //else, the element is not there
}

int main(void)
{
    int array[] = {1,3,55,2,5,78};
    int value = get_int();
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    int result = search(array, size, value);
    if (result == -1)
    {
        printf("Number not there\n");
    }
    else 
    {
        printf("Your number is at index %d\n", result);
    }
return 0;
}
