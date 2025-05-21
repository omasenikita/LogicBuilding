/////////////////////////////////////////////////////////////
// File Name :   Assignment6_2.c
// Description : Used to  conevt number to string
// Input :       int
// Output :      string
// Author :      Nikita Shahaji Omase
// Date :        16/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo ==0)
    {
        printf("Zero\n");
    }
    else if(iNo == 1)
    {
        printf("One\n");
    }
    
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }

    else if(iNo == 6)
    {
        printf("six\n");
    }

    else if(iNo == 7)
    {
        printf("Seven\n");
    }

    else if(iNo == 8)
    {
        printf("Eight\n");
    }

    else if(iNo == 9)
    {
        printf("Nine\n");
    }

    else 
    {
        printf("Invalid Number\n");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}