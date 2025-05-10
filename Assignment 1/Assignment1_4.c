/////////////////////////////////////////////////////////////
// File Name :   Assignment1_4.c
// Description : To check number divisible by 5 or not
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        08/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
    if((iNo % 5) == 0)
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
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;

}