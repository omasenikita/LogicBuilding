////////////////////////////////////////////////////////////
// File Name :   Assignment20_1.c
// Description : Used to  check whether the number is presen or not
// Input :       integer Array , int   
// Output :      Boolean
// Author :      Nikita Shahaji Omase
// Date :        31/05/2025
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    if(Arr == NULL || iSize<=0)
    {
        return false;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *iPtr = NULL;
    int iLength = 0,iValue = 0,iCnt = 0;
    bool bRet = false;

    printf("Enter number of elements:\n");
    scanf("%d",&iLength);

    iPtr = (int*)malloc(iLength *sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("\nEnter the value that u want to search\n");
    scanf("%d",&iValue);

    bRet = Search(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is Present in the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",iValue);
    }


    free(iPtr);

    return 0;
}