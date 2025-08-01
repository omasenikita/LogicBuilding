/////////////////////////////////////////////////////////////
// File Name :   Assignment23_4.c
// Description : Used to check whether the character is special symbol or not
// Input :       char
// Output :      bool
// Author :      Nikita Shahaji Omase
// Date :        2/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool ChkSpecial(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z') ||( ch >= 'a') && (ch <= 'z' )||( ch >= '0') &&( ch <='9')))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
   
}
int main()
{
    char cValue= '\0';
    bool bRet = FALSE;

    printf("Enter a character:\n");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is not a special character %c\n",cValue);
    }
    else
    {
        printf("It is a special character %c\n",cValue);
    }

    return 0;
}