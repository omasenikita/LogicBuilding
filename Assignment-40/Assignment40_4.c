/////////////////////////////////////////////////////////////
// File Name :   Assignment40_4.c
// Description : Used to Display pattern
// Input :       int 
// Output :      
//               A D C D
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iLength)
{
    static char ch  = 'A';
   if(iLength > 0)
   {
     printf("%c ",ch);
     ch++;
    iLength--;
    Display(iLength);
   }
}
int main()
{
    int iSize = 0;
    printf("Enter a number:");
    scanf("%d",&iSize);

    Display(iSize);
    return 0;
}