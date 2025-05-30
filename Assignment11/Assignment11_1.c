/////////////////////////////////////////////////////////////
// File Name :   Assignment11_1.c
// Description : Used to print alphabets
// Input :       int
// Output :      A B C D 
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0; 
    char ch = 'A';  

    for(iCnt = 1; iCnt <= iNo; iCnt ++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

}
