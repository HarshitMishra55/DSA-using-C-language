#include <stdio.h>
#include <stdlib.h>

// I tried goto in 2 places for learning purpose

int main()
{
    while (1)
    {
        int sizeOfFirstArray, sizeOfSecondArray, mergingCaseValue;
        printf("Enter size for 1st Array ==> ");
        scanf("%d", &sizeOfFirstArray);
        int arrayOne[sizeOfFirstArray];
        for (int i = 0; i < sizeOfFirstArray; i++)
        {
            printf("Enter the element number %d ==> ", i + 1);
            scanf("%d", &arrayOne[i]);
        }
        printf("Your 1st array is ==> ");
        for (int i = 0; i < sizeOfFirstArray; i++)
        {
            printf("%d ", arrayOne[i]);
        }
        printf("\n");

        printf("Enter size for 2nd Array ==> ");
        scanf("%d", &sizeOfSecondArray);
        int arrayTwo[sizeOfSecondArray];
        for (int i = 0; i < sizeOfSecondArray; i++)
        {
            printf("Enter the element number %d ==> ", i + 1);
            scanf("%d", &arrayTwo[i]);
        }
        printf("Your 2nd array is ==> ");
        for (int i = 0; i < sizeOfSecondArray; i++)
        {
            printf("%d ", arrayTwo[i]);
        }
        printf("\n");

        int numberOfElementInArrayOne = sizeof(arrayOne) / sizeof(arrayOne[0]);
        int numberOfElementInArrayTwo = sizeof(arrayTwo) / sizeof(arrayTwo[0]);
        int sizeOfResultantArray = numberOfElementInArrayOne + numberOfElementInArrayTwo;
        int resultantArray[sizeOfResultantArray];
    invalidInput:
        printf("==================== Enter Your Choice ====================\n");
        printf("Enter 1 for merging two Arrays in one Array\n");
        printf("Enter 2 for Exit from program\n");
        printf("===========================================================\n");
        scanf("%d", &mergingCaseValue);
        switch (mergingCaseValue)
        {
        case 1:
            for (int i = 0; i < numberOfElementInArrayOne; i++)
            {
                resultantArray[i] = arrayOne[i];
            }
            for (int i = 0; i < numberOfElementInArrayTwo; i++, numberOfElementInArrayOne++)
            {
                resultantArray[numberOfElementInArrayOne] = arrayTwo[i];
            }
            printf("Your Merged Array is ==> ");
            for (int i = 0; i < sizeOfResultantArray; i++)
            {
                printf("%d ", resultantArray[i]);
            }
            printf("\n");

            int decider;
        invalidInTryAgain:
            printf("===== Do You Want to Try Again ??? =====\n");
            printf("Enter 1 for Try Again\n");
            printf("Enter 2 for Exit from program\n");
            printf("========================================\n");
            scanf("%d", &decider);
            switch (decider)
            {
            case 1:
                break;
            case 2:
                exit(0);
                break;

            default:
                goto invalidInTryAgain;
                printf("Invalid Input\n");
                break;
            }

            break;
        case 2:
            exit(0);
            break;

        default:
            printf("Invalid Input\n");
            goto invalidInput;
            break;
        }
    }

    return 0;
}