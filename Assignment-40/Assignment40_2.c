/////////////////////////////////////////////////////////////
// File Name :   Assignment40_2.c
// Description : Used to Display pattern
// Input :       int 
// Output :      
//               4 3 2 1
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iLength)
{
   if(iLength > 0)
   {
     printf("%d  ",iLength);
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