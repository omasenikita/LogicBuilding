////////////////////////////////////////////////////////////
// File Name :   Assignment19_5.c
// Description : Used to count the frequency of even number
// Input :       int, int   
// Output :     
// Author :      Nikita Shahaji Omase
// Date :        27/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iNo)
{
    int  iCnt = 0, iCount = 0;
     
    if(Arr == NULL || iNo <= 0)
    {
        return -1; // Error case
    }
    for( iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((Arr[iCnt] % 2)== 0)
        {
            iCount++;
        }
    }

    return iCount;

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
    
    iRet = Frequency(Ptr,iSize);
    printf("Frequency of even number is : %d\n", iRet);

    free(Ptr);

    return 0;
}
