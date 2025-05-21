/////////////////////////////////////////////////////////////
// File Name :   Assignment6_3.c
// Description : Used to count the number of digits in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        16/05/2025
////////////////////////////////////////////////////////////#
include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact = 1;

    if(iNo <= 0)
    {
        return 1;
    }

    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt ++;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is : %d",iRet);

    return 0;
}