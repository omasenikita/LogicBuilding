/////////////////////////////////////////////////////////////
// File Name :   Assignment7_3.c
// Description : Used to Display Even factorial of N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int DisplayEvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)==0)
        {
        iFact = iFact * iCnt;
        }
    }
    return iFact;    

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter  number: ");
    scanf("%d",&iValue);

    iRet = DisplayEvenFactorial(iValue);

    printf("Even factorial of given number: %d\n",iRet);
    
    return 0;
}