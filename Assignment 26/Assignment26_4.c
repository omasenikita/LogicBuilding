
#include<stdio.h>

int LastOccur(char str[], char ch)
{
    int iCount = 0, iCnt = 0;
    int lastIndex = -1; // Initialize to -1 to indicate not found
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            lastIndex = iCnt; // Update lastIndex whenever character is found
        }  
    }
    return lastIndex; // Return the last index found, or -1 if not found
}
int main()
{
    char Arr[20]={'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string\n");
    scanf("%[^'\n]s",Arr);

    //Problem due to buffer cleanup
    printf("Enter a character u want to count frequency: \n");
    scanf(" %c",&cValue);

    iRet = LastOccur(Arr,cValue);

    printf(" Character last index is : %d ",iRet);


    return 0;
}




