/////////////////////////////////////////////////////////////
// File Name :   Assignment5_5.c
// Description : Used to Display first 5 factors of N
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayFactor(int iNo)
{

    int iCnt = 0;
    int iNum = 1;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while (iCnt < 5) {
        if (iNum % iNo == 0) {
            printf("%d ", iNum);
            iCnt++;
        }
        iNum++;
    }

}
int main()
{
    int iValue = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}