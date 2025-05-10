/////////////////////////////////////////////////////////////
// File Name :   Assignment2_1.c
// Description : Used to print Star 
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
    while (iCnt < iNo1 )
    {
        printf("*\n");
        iCnt++;
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