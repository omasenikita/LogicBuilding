////////////////////////////////////////////////////////////
// File Name :   Assignment10_4.c
// Description : Used to calculate multiplication of digits in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;  
        iMult = iMult * iDigit;   
    }
    return iMult;      
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

   iRet = MultDigit(iValue);
   printf("Multiplication of all digits is : %d",iRet);

    return 0;
}