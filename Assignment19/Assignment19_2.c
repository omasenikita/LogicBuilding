////////////////////////////////////////////////////////////
// File Name :   Assignment19_2.c
// Description : Used to find the diffence between frequency of even numbers and odd numbers
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        28/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FrequencyDiff(int Arr[], int iNo)
{
    int  iCnt = 0, iEvenCount = 0,iOddCount = 0;
     
    if(Arr == NULL || iNo <= 0)
    {
        return -1; // Error case
    }
    for( iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iEvenCount++;
        }
        else
        {
            iOddCount++;
        }

    }

    return iEvenCount - iOddCount;

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *Ptr = NULL;          // Pointer to hold the base address of dynamically allocated memory
      
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
    
    iRet = FrequencyDiff(Ptr,iSize);
    printf("Frequency difference between  even numbers and odd numbers arenn : %d\n", iRet);

    free(Ptr);

    return 0;
}