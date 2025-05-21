////////////////////////////////////////////////////////////
// File Name :   Assignment8_4.c
// Description : Used to convert Fahrenheit to Celsius
// Input :       float
// Output :      double
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
double FhToCs(float fTemp)
{
    float fAns = 0.0f;
    fAns = ((fTemp - 32) * 5)/ 9;
    return fAns;

}
int main()
{
    float fValue = 0.0f;
    double  dRet = 0.0;
    printf("Enter a temperature in fahrenheit : ");
    scanf("%f",&fValue);
    dRet = FhToCs(fValue);
    printf("Temperature in celsius is : %f\n",dRet);
    return 0;
}