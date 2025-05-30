////////////////////////////////////////////////////////////
// File Name :   Assignment19_3.c
// Description : Used to check whether 11 is present or not
// Input :       integer Array , int   
// Output :      boolean
// Author :      Nikita Shahaji Omase
// Date :        28/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0 

bool Check(int Arr[], int iNo)
{
    int  iCnt = 0;
     
    if(Arr == NULL || iNo <= 0)
    {
        return -1; // Error case
    }
    for( iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(Arr[iCnt]== 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

   

}

int main()
{
    int iSize = 0,  iCnt = 0;
    int *Ptr = NULL;  
    bool bRet = 0;        // Pointer to hold the base address of dynamically allocated memory
      
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
    
    bRet = Check(Ptr,iSize);
    if(bRet == 1)
    {
        printf("11 is present in array");
    }
    else
    {
        printf("11 is not present in array");
    }

    free(Ptr);

    return 0;
}