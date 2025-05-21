////////////////////////////////////////////////////////////
// File Name :   Assignment8_2.c
// Description : Used to calculate area of rectangle
// Input :       float
// Output :      double
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>
double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0f;
    fArea = fWidth * fHeight;
    return fArea;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double  dRet = 0.0;
    printf("Enter a width :  ");
    scanf("%f",&fValue1);

    printf("Enter a height :  ");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is : %.2f\n",dRet);
    return 0;
}