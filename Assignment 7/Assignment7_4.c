/////////////////////////////////////////////////////////////
// File Name :   Assignment7_4.c
// Description : Used to Display Odd factorial of N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int DisplayOddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2)!=0)
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

    iRet = DisplayOddFactorial(iValue);

    printf("Even factorial of given number: %d\n",iRet);
    
    return 0;
}