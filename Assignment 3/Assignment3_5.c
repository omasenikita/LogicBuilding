/////////////////////////////////////////////////////////////
// File Name :   Assignment3_5.c
// Include file: ChkVowel.c
// Description : Used to check whether a character is a vowel or not
// Input :       char
// Output :      String
// Author :      Nikita Shahaji Omase
// Date :        10/05/2025
////////////////////////////////////////////////////////////
typedef int BOOL;
#include<stdio.h>
#include"ChkVowel.c"

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character:\n");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    
    else if(bRet == FALSE)
    {
        printf("It is not vowel\n");
    }

    return 0;
}