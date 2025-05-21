////////////////////////////////////////////////////////////
// File Name :   Assignment10_3.c
// Description : Used to count the number of digits between 3 and 7 in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int CountRange(int iNo)
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
      
        if((iDigit > 3)&&(iDigit <=7 )) 
        {
            iCnt++;
        }        
    }
    return iCnt;      
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

   iRet = CountRange(iValue);
   printf("Count of  numbers  between 3 and 7 are : %d",iRet);

    return 0;
}