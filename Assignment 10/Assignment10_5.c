/////////////////////////////////////////////////////////////////////////////////////
// File Name :   Assignment10_5.c
// Description : Used to calculate difference between sum of even and odd digits in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int AddEvneOddDigit(int iNo)
{
    int iDigit = 0, iESum1 = 0, iOSum2 = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;  
    
        if((iDigit % 2)==0)
        {
            iESum1 = iESum1 + iDigit;
            
        }
        else if((iDigit % 2)!=0)
        {
            iOSum2 = iOSum2 + iDigit;
           
             
        }
    }
         printf("Even digit sum is : %d\n",iESum1);
         printf("Odd digit sum is : %d\n",iOSum2);

        return iESum1 - iOSum2;
       
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

   iRet = AddEvneOddDigit(iValue);
   printf("Difference between even number sum and odd number sum is  : %d",iRet);

    return 0;
}