/////////////////////////////////////////////////////////////
// File Name :   Assignment4_3.c
// Description : Used Display non factors
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayNonFactor(int iNo)
{
    int iCnt = 0;

     for(iCnt = 1;iCnt <=iNo; iCnt++)
     {
        if((iNo % iCnt)!=0)
        {
            printf("%d \n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a value: ");
    scanf("%d", &iValue);

    DisplayNonFactor(iValue);

    
    return 0;
}