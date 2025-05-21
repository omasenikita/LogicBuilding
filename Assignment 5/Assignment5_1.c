/////////////////////////////////////////////////////////////
// File Name :   Assignment5_1.c
// Description : Used to Pattern
//               $ * $ * $ * $ * $ * $ * $ * $ * $ * $ *
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iNo)
{

    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf(" $ * ");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}
