
/////////////////////////////////////////////////////////////
// File Name :   Assignment2_5.c
// Description : Used to check Number is even or not
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////'
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter value :\n");
    scanf("%d",&iValue);

    iRet = ChkEven(iValue);
    if(iRet == TRUE)
    {
        printf("Even Number\n");
    }
    else if (iRet == FALSE)
    {
        printf("Odd number\n");
    }
        
    return 0;
}