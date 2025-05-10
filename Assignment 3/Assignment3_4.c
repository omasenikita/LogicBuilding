/////////////////////////////////////////////////////////////
// File Name :   Assignment3_4.c
// Include file: DisplayConvert.c
// Description : Used covert case of character
// Input :       char
// Output :      char
// Author :      Nikita Shahaji Omase
// Date :        10/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>
#include"DisplayConvert.c"
int main()
{
    char cValue = '\0';
    printf("Enter the character:\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}