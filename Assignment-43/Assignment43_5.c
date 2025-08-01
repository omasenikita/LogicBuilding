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

int Reverse(int iNum)
{
    int i = 0;
    static int iRev = 0;
    int iDigit = 0;
    if(iNum != 0)
    {
        iDigit = iNum %10;
        iRev = iRev *10 + iDigit;
        iNum = iNum /10;
       
      
       Reverse(iNum--);     
    }
   return iRev;

}
int main()
{
     
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("Reverse number is : %d\n",iRet);

    return 0;
}
