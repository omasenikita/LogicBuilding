
/////////////////////////////////////////////////////////////
// File Name :   Assignment4_2.c
// Description : Used to Display  factors in descending order
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayFactorDesc(int iNo)
{
    int iCnt = 0;

     for(iCnt = iNo/2;iCnt >=1; iCnt--)
     {
        if((iNo % iCnt)==0)
        {
            printf("%d ",iCnt);
        }
    }


}

int main()
{
    int iValue = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    DisplayFactorDesc(iValue);

    
    return 0;
}