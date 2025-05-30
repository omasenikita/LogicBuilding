
////////////////////////////////////////////////////////////
// File Name :   Assignment19_5.c
// Description : Used to count frequency of given number
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        28/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int iCount = 0, iCnt = 0;
    if(Arr == NULL || iLength <= 0)
    {
        return -1; // Error case
    }

    for (iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int iSize = 0, iCnt = 0;
    int *Ptr = NULL;
    int iRet = 0;
    int iNo = 0;

    printf("Enter a size of elements:\n");
    scanf("%d",&iSize);

    Ptr = (int*) malloc(iSize *sizeof(int));
    if(NULL == Ptr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d element \n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Elements are %d : ",iCnt + 1);
        scanf("%d",&Ptr[iCnt]);
    }

    printf("Enter a number you want to find a frequency :");
    scanf("%d",&iNo);


    iRet = Frequency(Ptr,iSize,iNo);
    printf("Frequency of  %d  from array is : %d\n",iNo,iRet);

    free(Ptr);


    return 0;
}