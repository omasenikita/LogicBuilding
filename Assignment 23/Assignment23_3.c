/////////////////////////////////////////////////////////////
// File Name :   Assignment23_3.c
// Description : Used to display the range from taht character
// Input :       char
// Output :      char
// Author :      Nikita Shahaji Omase
// Date :        2/06/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
    char Cnt = '\0';
    if((ch >= 'A')&& (ch <= 'Z'))
    {

    for( Cnt = ch; Cnt<='Z'; Cnt ++, ch++)

    {
       printf("%c",ch);   
    }

    }
    else 
    {
    for( Cnt = ch; Cnt>='a'; Cnt --, ch--)
    {
    printf("%c",ch);
    }
    }
   
}
int main()
{
    char cValue= '\0';
    printf("Enter a character:\n");
    scanf(" %c", &cValue);
    Display(cValue);
   

    return 0;
}