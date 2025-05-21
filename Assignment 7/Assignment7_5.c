/////////////////////////////////////////////////////////////
// File Name :   Assignment7_5.c
// Description : Used to Display Difference of Even and Odd factorial of N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
        iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact - iOddFact;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter  number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even factorial of given number: %d\n",iRet);
    
    return 0;
}