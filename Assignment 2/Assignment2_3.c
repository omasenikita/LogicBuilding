
/////////////////////////////////////////////////////////////
// File Name :   Assignment2_3.c
// Description : to check whhether input less than 10 or not
// Input :       int
// Output :      String
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else{
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}