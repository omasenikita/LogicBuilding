////////////////////////////////////////////////////////////
// File Name :   Assignment9_2.c
// Description : Used to Identify whether number contains zero or not
// Input :       int
// Output :      string
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
          
    }
    return iDigit; 
    if(iDigit == 0)
    {   
        printf("there is zero");
    }
    else
    {
        printf("it not contain zero");
    }     
    


       
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}