/////////////////////////////////////////////////////////////
// File Name :   Assignment43_2.c
// Description : Used to retun largest digit
// Input :       int
// Output :      
//               3435359
//                9
// Author :      Nikita Shahaji Omase
// Date :        25/07/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

int Largest(int iNum)
{
    int i = 0;
    static int iMax= 0;
    int iDigit = 0;
    if(iNum != 0)
    {
        iDigit = iNum %10;
        iNum = iNum /10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
      
        Largest(iNum--);     
    }

 
   return iMax;

}
int main()
{
     
    int iValue = 0;
    int iRet = 0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);
    iRet = Largest(iValue);
    printf("Largest number is : %d\n",iRet);

    return 0;
}
