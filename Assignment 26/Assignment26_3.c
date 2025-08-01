
#include<stdio.h>

int FirstOccur(char str[], char ch)
{
    int iCount = 0, iCnt = 0;
    for(iCnt = 0;str[iCnt] != '\0';iCnt++)
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }  
        else if(str[iCnt] == '\0')
        {
            return -1;  // If character not found, return -1
        }  
   }
   

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

    iRet = FirstOccur(Arr,cValue);

    printf("Character first index is : %d ",iRet);


    return 0;
}




