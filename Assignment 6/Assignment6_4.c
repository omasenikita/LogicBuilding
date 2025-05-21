/////////////////////////////////////////////////////////////
// File Name :   Assignment6_4.c
// Description : Used to Display table of N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        16/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 1;
    int iTable = 1;

    while(iCnt <=10)
    {
        iTable = iNo * iCnt;
        printf("%d  ",iTable);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayTable(iValue);
    return 0;
}