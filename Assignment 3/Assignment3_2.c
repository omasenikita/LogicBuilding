/////////////////////////////////////////////////////////////
// File Name :   Assignment3_2.c
// Include file: DisplayFactor.c
// Description : Used to print factors
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include"DisplayFactor.c"

int main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}