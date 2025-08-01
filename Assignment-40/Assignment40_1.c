/////////////////////////////////////////////////////////////
// File Name :   Assignment40_1.c
// Description : Used to Display pattern
// Input :       int 
// Output :      
//              *  * * *
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iLength)
{
   if(iLength > 0)
   {
     printf("* ");
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