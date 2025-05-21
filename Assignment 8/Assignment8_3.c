////////////////////////////////////////////////////////////
// File Name :   Assignment8_3.c
// Description : Used to convert Kilometer to Meter
// Input :       int
// Output :      int
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#define DISTANCE 1000
int KMToMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * DISTANCE;
    return iMeter;
}
int main()
{
    int iValue = 0;
    int  iRet = 0;
    printf("Enter a Distance in Kilometer :  ");
    scanf("%d",&iValue);

   
    iRet = KMToMeter(iValue);
    printf("Distance in meter is : %d\n",iRet);
    return 0;
}