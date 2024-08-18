#include <stdio.h>
#include <stdlib.h>  // Required for exit()
#include <windows.h> // Required for Beep()

void deleteNumberByValue(int arr[], int sizeOfArray)
{
    // By Actual Value
    int value, i = 0, j = 0, inSequence = 0;
    int found = 0; // Flag to check if the number was found

    printf("Enter the Value that you want to delete from your Array ==> ");
    scanf("%d", &value);

    for (i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == value)
        {
            found = 1;
            if (!inSequence)
            {
                inSequence = 1;
            }
        }
        else
        {
            if (inSequence)
            {
                inSequence = 0;
            }
            arr[j] = arr[i];
            j++;
        }
    }

    for (i = j; i < sizeOfArray; i++)
    {
        arr[i] = 0;
    }

    if (!found)
    {
        printf("Value is not present in your Array\n");
    }

    printf("Your new Array is ==> ");
    for (i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteNumberByIndex(int arr[], int sizeOfArray, int pos)
{
    // By Index Value
    printf("Enter the Position of Element that you want to delete ==> ");
    scanf("%d", &pos);

    while (pos > sizeOfArray || pos <= 0)
    {
        printf("Invalid position, means this position is not present in your array\nTry again\n");
        printf("Enter the Position of Element that you want to delete ==> ");
        scanf("%d", &pos);
    }

    for (int i = pos - 1; i < sizeOfArray; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[sizeOfArray - 1] = 0;

    printf("Your new Array is ==> ");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int sizeOfArray, pos, choice;
    printf("Enter size of Array ==> ");
    scanf("%d", &sizeOfArray);
    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Enter Element for %d position ==> ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Your Array is ==> ");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\b \n");

    // ========================= Deletion =========================

    while (1)
    {
        printf("========= Enter a number from below choice =========\n");
        printf("Enter 1 for Deleting Number by Index\n");
        printf("Enter 2 for Deleting Number by Value\n");
        printf("Enter 3 to move out from the program\n");
        printf("====================================================\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            deleteNumberByIndex(arr, sizeOfArray, pos);
            break;
        case 2:
            deleteNumberByValue(arr, sizeOfArray);
            break;
        case 3:
            Beep(750, 300); // Frequency in Hertz, Duration in milliseconds
            exit(0);
            break;

        default:
            printf("Invalid Input");
            break;
        }
    }

    return 0;
}