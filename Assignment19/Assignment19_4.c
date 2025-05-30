////////////////////////////////////////////////////////////
// File Name :   Assignment19_4.c
// Description : Used to count frequency of 11
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        28/05/2025
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength)
{
    int iCount = 0, iCnt = 0;
    if(Arr == NULL || iLength <= 0)
    {
        return -1; // Error case
    }

    for (iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
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

    iRet = Frequency(Ptr,iSize);
    printf("Frequency of  11  from array is : %d\n",iRet);

    free(Ptr);


    return 0;
}