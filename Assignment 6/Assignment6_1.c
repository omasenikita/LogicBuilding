/////////////////////////////////////////////////////////////
// File Name :   Assignment6_1.c
// Description : Used to Display number is Small, Medium or Large
// Input :       int
// Output :      String
// Author :      Nikita Shahaji Omase
// Date :        13/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(((iNo >= 50))&&((iNo < 100)))
    {
        printf("Medium\n");
    }
    else if(iNo >=100)
    {
        printf("Large\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}
