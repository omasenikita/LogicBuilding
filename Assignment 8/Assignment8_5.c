////////////////////////////////////////////////////////////
// File Name :   Assignment8_5.c
// Description : Used to Convert square feet to square meter
// Input :       float
// Output :      double
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#define DISTANCE 0.0929
double SqureMeter(int iNo)
{
    double dMeter = 0.0;
    dMeter = iNo * DISTANCE;
    return dMeter;
}
int main()
{
    int iValue = 0;
    double  dRet = 0.0;

    printf("Enter a Distance in square feet :  ");
    scanf("%d",&iValue);

   
    dRet = SqureMeter(iValue);
    printf("Distance in squre meter is : %f\n",dRet);
    
    return 0;
}