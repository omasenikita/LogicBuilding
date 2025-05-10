/////////////////////////////////////////////////////////////
// File Name :   Assignment3_1.c
// Include file: PrintEven.c
// Description : Used to print even numbers
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>
#include"PrintEven.c"
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}
