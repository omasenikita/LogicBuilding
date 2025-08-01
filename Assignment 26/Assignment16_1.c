#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
bool ChkChar(char *str,char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(str[iCnt]==ch)
        {
            return 1;

        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    char Arr[20] ={'\0'};
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a charater u want to check:\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(Arr,cValue);
    if(bRet == TRUE)
    {
        printf("Character is present in the string\n");

    }
    else
    {
        printf("Character is not present in the string\n");
    }

    return 0;
}