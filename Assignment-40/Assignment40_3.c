/////////////////////////////////////////////////////////////
// File Name :   Assignment40_3.c
// Description : Used to Display pattern
// Input :       int 
// Output :      
//               1 2 3 4
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iLength)
{
    static int i = 1;
   if(iLength > 0)
   {
     printf("%d  ",i);
     i++;
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