////////////////////////////////////////////////////////////
// File Name :   Assignment18_3.c
// Description : Used to display elemnet which is divisible by 5 and even 
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        27/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt  = 0; iCnt  < iLength; iCnt ++)
    {
        if(((Arr[iCnt] %2)==0)&&((Arr[iCnt ] % 5) == 0))
        {
            printf("%d ",Arr[iCnt]);
        }
       
    }  

}

int main()
{
    int iSize = 0,iCnt = 0; 
    int *Ptr = NULL;           // Pointer to hold the base address of dynamically allocated memory
      
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
    printf("Enter %d elements : \n",iSize);
    for(iCnt  = 0; iCnt  < iSize; iCnt ++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d", &Ptr[iCnt]);
    }
    
    Display(Ptr,iSize);

    free(Ptr);

    return 0;
}