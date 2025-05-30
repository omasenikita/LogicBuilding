/////////////////////////////////////////////////////////////
// File Name :   Assignment11_2.c
// Description : Used to print alphabets
// Input :       int
// Output :      5 # 4 # 3 # 2 # 1 #
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;   

    for(iCnt = iNo; iCnt >= 1; iCnt --)
    {
        printf(" %d\t#\t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}