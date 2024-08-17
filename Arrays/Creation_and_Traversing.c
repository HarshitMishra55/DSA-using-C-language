#include <stdio.h>
// ------- Formula's for Array -------
// Sizeof_Array = (Higgest_Index_value - Lowest_Index_Value) + 1
// suppose ==> size = Size of Data type of that array
// [for 3rd element "i" will be 2]
// Address_of_i'th element = Base Address + [i - (lowestIndexValue) × size]

// ================== Creation ==================

// Creation = Declaration + Initialization

int main()
{
    // Declaration Type 1
    int array1[5];

    array1[0] = 1; // Initialization
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    array1[4] = 5;

    // Declaration Type 2
    int array2[5] = {1, 2, 3, 4, 5}; // Initialization is {1, 2, 3, 4, 5} this

    // Declaration Type 3 [size sets automatically]
    int array3[] = {1, 2, 3, 4, 5}; // Initialization is {1, 2, 3, 4, 5} this

    // Declaration Type 4 [Equivalent to {1, 2, 0, 0, 0}]
    int array4[] = {1, 2}; // Initialization is {1, 2} this

    // ================== Traversing ==================

    // Use any Loops for traversing the array

    printf("Elements of Array1 are ==> ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", array1[i]);
    }
    printf("\b \n"); // "\b" and "\n" are an escape sequence

    // -----------------------------------------------------------

    printf("Elements of Array2 are ==> ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", array2[i]);
    }
    printf("\b \n"); // "\b" and "\n" are an escape sequence

    // -----------------------------------------------------------

    printf("Elements of Array3 are ==> ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", array3[i]);
    }
    printf("\b \n"); // "\b" and "\n" are an escape sequence

    // -----------------------------------------------------------

    printf("Elements of Array4 are ==> ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", array4[i]);
    }
    printf("\b "); // "\b" and "\n" are an escape sequence

    return 0;
}