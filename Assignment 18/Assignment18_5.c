////////////////////////////////////////////////////////////
// File Name :   Assignment18_5.c
// Description : Used to display elemnet which is multiple of 11
// Input :       integer Array , int   
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        27/05/2025
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%11)==0)
        {
            printf(" %d \t",Arr[iCnt]);
        }
        
    }
}
int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;
    printf("Enter the number of element:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc (iSize * sizeof(int));
    printf("Enter the %d elements\n",iSize);
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter %d element:",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr,iSize);
    free(ptr);
    return 0;
}