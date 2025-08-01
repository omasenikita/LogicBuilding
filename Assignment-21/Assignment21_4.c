#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iSize)
{
    if (Arr == NULL || iSize <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    printf("Numbers containing the digit 3:\n");
    for (int iCnt = 0; iCnt < iSize; iCnt++)
    {
        int temp = Arr[iCnt];
        while (temp != 0)
        {
            int digit = temp % 10;
            if (digit == 3)
            {
                printf("%d ", Arr[iCnt]);
                break; // Stop checking once 3 is found
            }
            temp = temp / 10;
        }
    }
    printf("\n");
}

int main()
{
    int *iPtr = NULL;
    int iSize = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    if (iSize <= 0)
    {
        printf("Invalid size\n");
        return -1;
    }

    iPtr = (int*)malloc(iSize * sizeof(int));
    if (iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < iSize; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &iPtr[i]);
    }

    Digit(iPtr, iSize);

    free(iPtr);

    return 0;
}
