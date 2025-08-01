/////////////////////////////////////////////////////////////
// File Name :   Assignment24_4.c
// Description : Used to check  vowels is present or not in the string
// Input :       char
// Output :      bool
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

int ChkVowel(char *str)
{
    int Count = 0;
    while(*str != '\0')
    {
     if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')
     || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
       return TRUE;
    }
        *str++;
    }
    

}
int main()
{
    char arr[40];
    bool bRet = FALSE;
    printf("Enter a character:\n");
    scanf("%[^'\n]s",arr);
    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Vowel is present in the string\n");
    }
    else
    {
        printf("Vowel is not present in the string\n");
    }

    return 0;
}