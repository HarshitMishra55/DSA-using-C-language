#include <stdio.h>

int main()
{
    // NOTE: Normally we declare a very large size of array by our-self for this operation but here we see try another method for a particular case [When size of array is defined by the user and after that they want insertion and our array is already filled and without losting the last value of array]

    int sizeOfArray, x, pos, lastValueOfArray;
    printf("Please Set the size of your array => ");
    scanf("%d", &sizeOfArray); // User is defining the size but it is not dynamic array
    int arr[sizeOfArray];

    printf("Please enter all elements for array of size %d \n", sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Please enter element for position %d ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your array is => ");

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\b \n");

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Element at position %d is %d \n", i + 1, arr[i]);
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Index of element %d is %d \n", arr[i], i);
    }

    // ===================== Insertion =====================

    printf("Give the element that you want to insert => ");
    scanf("%d", &x);
    printf("At which position do you want to insert => ");
    scanf("%d", &pos);

    //  Increase the size of existing arrar

    while (pos <= 0 || pos > sizeOfArray)
    {
        printf("Invalid position means this position is not present in your array\nTry again \n");
        printf("At which position do you want to insert => ");
        scanf("%d", &pos);
    }

    lastValueOfArray = arr[sizeOfArray - 1]; // Because we can not change the size of Array if it is initialized once

    for (int i = sizeOfArray - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    printf("Your element is inserted at %d location\n", pos);

    printf("Your new array is => ");

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d \b \n", lastValueOfArray); // Here size of Array is not increased. This is simple trick for deception of eyes.

    return 0;
}