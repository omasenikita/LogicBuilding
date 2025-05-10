/////////////////////////////////////////////////////////////
// File Name :   Assignment3_3.c
// Include file: DisplayEvenFactor.c
// Description : Used to print factors in even order
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#include"DisplayEvenFactor.c"
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}