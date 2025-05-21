/////////////////////////////////////////////////////////////
// File Name :   Assignment8_1.c
// Description : Used to calculate area of circle
// Input :       float
// Output :      double
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = PI * fRadius * fRadius;
    return fArea;

}
int main()
{
    float fRad = 0.0f;
    double  dRet = 0.0;
    printf("Enter the radius of circle : ");
    scanf("%f",&fRad);
    dRet = CircleArea(fRad);
    printf("Area of circle is : %.4f\n",dRet);
    return 0;
}
