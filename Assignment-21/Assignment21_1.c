#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int Max = Arr[0];
    if(Arr == NULL || iSize<=0)
    {
        return -1;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }

    return Max;

}

int main()
{
    int *iPtr = NULL;
    int iSize = 0,iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize *sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter the number %d: ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }
    iRet = Maximum(iPtr, iSize);
   
    printf("Largest Element is: %d\n", iRet);
    

    free(iPtr);

    return 0;
}