/////////////////////////////////////////////////////////////
// File Name :   Assignmen1_5.c
// Description : Used to print Star 
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        08/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the value");
    scanf("%d",&iValue);

    Display(iValue);
       
    return 0;
}