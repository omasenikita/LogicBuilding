/////////////////////////////////////////////////////////////
// File Name :   Assignment4_1.c
// Description : Used to calculate Multipication of factors
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int FactorMultiplication(int iNo)
{
    int iCnt = 0;
     int iMulti = 1;
     for(iCnt = 2;iCnt <= iNo/2; iCnt++)
     {
        if((iNo % iCnt)==0)
        {
            iMulti = iMulti * iCnt;
        }
    }
         return iMulti;


}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    iRet = FactorMultiplication(iValue);

    printf("Multiplication of factors is :%d",iRet);
    
    return 0;
}
