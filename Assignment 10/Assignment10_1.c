////////////////////////////////////////////////////////////
// File Name :   Assignment10_1.c
// Description : Used to count the number of even digits in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int CountEven(int iNo)
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
      
        if((iDigit % 2)==0)
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

   iRet = CountEven(iValue);
   printf("Count of even numbers is %d",iRet);

    return 0;
}
