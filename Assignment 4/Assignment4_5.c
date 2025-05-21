/////////////////////////////////////////////////////////////
// File Name :   Assignment4_5.c
// Description : Used to Calculate Addition of non factors 
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
int  AddFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iNsum = 0;
    int iSum = 0;
     for(iCnt = 1;iCnt <=iNo; iCnt++)
     {
        if((iNo % iCnt)!=0)
        {
            printf("Non factors : %d\n",iCnt);
            iNsum = iNsum + iCnt; 
              
        }
        else if((iNo % iCnt)==0)
        {
            printf("factors : %d\n",iCnt);
            iSum = iSum + iCnt;

        }
    }
    return iSum + iNsum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a value: ");
    scanf("%d", &iValue);

    iRet = AddFactorsNonFactors(iValue);
    printf("\nSummation of non factors  and factors of value is : %d\n",iRet);  

    return 0;
}