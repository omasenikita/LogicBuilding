/////////////////////////////////////////////////////////////
// File Name :   Assignment2_2.c
// Description : Used to print Star 
// Input :       int
// Output :      -
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while (iNo > iCnt)
    {
        printf("*");
        iNo --;
     }    
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}