/////////////////////////////////////////////////////////////
// File Name :   Assignment5_3.c
// Description : Used to Dsplay numbers from 1 to N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{

    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}