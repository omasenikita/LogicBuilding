////////////////////////////////////////////////////////////
// File Name :   Assignment10_2.c
// Description : Used to count odd numbers in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;  
      
        if((iDigit % 2)!=0)
    {   
       iCnt ++;
    }
    } 
    return iCnt;
         
       
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

   iRet = CountOdd(iValue);
   printf("Count of odd numbers is %d",iRet);

    return 0;
}