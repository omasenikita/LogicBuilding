/////////////////////////////////////////////////////////////
// File Name :   Assignment43_4.c
// Description : Used to retun smalllest digit
// Input :       int
// Output :      
//               34353591
//                1
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

int Smallest(int iNum)
{
    int i = 0;
    static int iMin = 9;
    int iDigit = 0;
    if(iNum != 0)
    {
        iDigit = iNum %10;
        iNum = iNum /10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
      
        Smallest(iNum--);     
    }
   return iMin;

}
int main()
{
     
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number");
    scanf("%d",&iValue);
    iRet = Smallest(iValue);
    printf("Smallest number is : %d\n",iRet);

    return 0;
}
