/////////////////////////////////////////////////////////////
// File Name :   Assignment6_5.c
// Description : Used to Display Table of N in reverse order
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        16/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayTableRev(int iNo)
{
    int iCnt = 10;
    int iTable = 1;

    while(iCnt >=1)
    {
        iTable = iNo * iCnt;
        printf("%d  ",iTable);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayTableRev(iValue);
    return 0;
}