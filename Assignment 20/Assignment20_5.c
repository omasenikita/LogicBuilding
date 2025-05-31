///////////////////////////////////////////////////////////
// File Name :   Assignment20_5.c
// Description : Used to calculate product of elements
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        31/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int product  = 1;
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        product = product * Arr[iCnt];
    }
    return product;
   
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;
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

    iRet = Product(ptr, iSize);
    printf("Product of all elements is : %d\n",iRet);


    free(ptr);

    return 0;
}