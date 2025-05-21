/////////////////////////////////////////////////////////////
// File Name :   Assignment7_2.c
// Description : Used to convert Dollar to INR
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#define CONVERT 70
int DollerToINR(int iNo)
{
    int iAns = 0;
    iAns = iNo * CONVERT ;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    iRet = DollerToINR(iValue);
    printf("Dollars to INR: %d\n", iRet);
    return 0;
}