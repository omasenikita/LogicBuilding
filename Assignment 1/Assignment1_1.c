/////////////////////////////////////////////////////////////
// File Name :   Assignment1_1.c
// Description : Used to perform division of two numbers
// Input :       int, int    
// Output :      int, int   
// Author :      Nikita Shahaji Omase
// Date :        08/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if(iNo2 <= 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division of numbers is : %d\n",iRet);

    return 0;
}