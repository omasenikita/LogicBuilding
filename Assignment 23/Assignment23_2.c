/////////////////////////////////////////////////////////////
// File Name :   Assignment23_2.c
// Description : Used to convert its case from lower to upper and vice versa
// Input :       char
// Output :      char
// Author :      Nikita Shahaji Omase
// Date :        1/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32; // Convert to lowercase
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32; // Convert to uppercase
    }
    else
    {
        printf("Invalid character\n");
        return;
    }
    printf("Converted character: %c\n", ch);
}
int main()
{
    char cValue= '\0';
    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    Display(cValue);
   

    return 0;
}