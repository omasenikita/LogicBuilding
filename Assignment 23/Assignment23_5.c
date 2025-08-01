/////////////////////////////////////////////////////////////
// File Name :   Assignment23_5.c
// Description : Used to display ascii of character in HEX DECImal oct form
// Input :       char
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        2/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayASCII(char ch)
{

    printf("Dec\tHex\tOct\tChar\n");
   
    printf("%d\t%X\t%o\t%c\n", ch,ch,ch, ch);
   
}
int main()
{
    char cValue = '\0';
    printf("Enter a character\n");
    scanf("%c",&cValue);
    DisplayASCII(cValue);
    return 0;
}