////////////////////////////////////////////////////////////
// File Name :   Assignment9_4.c
// Description : Used to count the frequency of 4 in a number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int countFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;  
      
        if(iDigit == 4 )
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

   iRet = countFrequency(iValue);
   printf("Frequncy of 4 in program is %d",iRet);

    return 0;
}