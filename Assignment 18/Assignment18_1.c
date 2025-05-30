/////////////////////////////////////////////////////////////
// File Name :   Assignment18_1.c
// Description : Used to return the difference between evensum and oddsum
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        27/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iNo)
{
    int  iCnt = 0, iSumEven = 0, iSumOdd = 0;
     
    if(Arr == NULL || iNo <= 0)
    {
        return -1; // Error case
    }
    for( iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd +  Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;

}

int main()
{
    int iSize = 0, iRet = 0;
    int *Ptr = NULL,iCnt = 0;           // Pointer to hold the base address of dynamically allocated memory
      
    printf("Enter a number : \n");
    scanf("%d",&iSize);

    Ptr = (int *)malloc(iSize*sizeof(int));

    // if memory allocation fails
    if(NULL== Ptr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    // Accepting elements from user
    printf("Enter %d elements : \n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d", &Ptr[iCnt]);
    }
    
    iRet = Difference(Ptr,iSize);
    printf("Difference is : %d\n", iRet);

    free(Ptr);

    return 0;
}
