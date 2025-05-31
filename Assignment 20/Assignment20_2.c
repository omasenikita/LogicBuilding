////////////////////////////////////////////////////////////
// File Name :   Assignment20_2.c
// Description : Used to  find the first occurance of element
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        31/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt; // Return the index of the first occurrence
        }
    }


    return -1; // If the element is not found
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0, iValue =  0;
    int iRet = 0;
    printf("How many elements you want to enter:\n");
    scanf("%d",&iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate a memory\n");
        return -1;
    }

    printf("Enter a %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        printf("Enter %d element :",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter a element you want to check: \n");
    scanf("%d",&iValue );

    iRet = FirstOcc(ptr, iSize, iValue );
    if(iRet == -1)
    {
        printf("There is no such element in the array\n");
    }
    else
    {
        printf("First occurrence of %d is at index: %d\n", iValue, iRet);
    }

    free(ptr);

    return 0;
}