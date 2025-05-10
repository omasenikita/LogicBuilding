/////////////////////////////////////////////////////////////
// File Name :   Assignment2_4.c
// Description : Used to print number with perticular frequency
// Input :       int ,int 
// Output :      int, int
// Author :      Nikita Shahaji Omase
// Date :        09/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 1; i <=iFrequency ; i++)
    {
        printf("%d ",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0 ;
    printf("Enter  value:");
    scanf("%d",&iValue);
    printf("Enter count");
    scanf("%d",&iCount);
    Display(iValue,iCount);
    return 0;

}