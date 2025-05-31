///////////////////////////////////////////////////////////
// File Name :   Assignment20_4.c
// Description : Used to print number betwwen the range
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        31/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iNo1,int iNo2)
{
    int iCnt = 0;
    int iFlag = 0;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d ", Arr[iCnt]);
            iFlag = 1;
        }
    }
    if(iFlag == 0)
    {
        printf("There is no element in the given range\n");
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0, iValue1 =  0, iValue2 =  0;
    printf("How many elements you want to enter:\n");
    scanf("%d",&iSize);

    printf("Enter the starting point \n");
    scanf("%d",&iValue1);
    
    printf("Enter the ending point \n");
    scanf("%d",&iValue2);

    
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

    Range(ptr, iSize, iValue1,iValue2);

    free(ptr);

    return 0;
}