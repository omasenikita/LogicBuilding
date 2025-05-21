////////////////////////////////////////////////////////////
// File Name :   Assignment9_1.c
// Description : Used to Display Reverse of number
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        18/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;    
    }

    printf("%d",iRev);
    printf("\n");
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter a number : ");
    scanf(" %d",&iValue);

    Reverse(iValue);

    return 0;
}
