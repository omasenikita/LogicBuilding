/////////////////////////////////////////////////////////////
// File Name :   Assignment7_1.c
// Description : Used to Display * and # in same line
// Input :       int
// Output :      * * * * * * * # # # # # # # # #
// Author :      Nikita Shahaji Omase
// Date :        17/05/2025
////////////////////////////////////////////////////////////
#include<stdio.h>

void Diplay(int iNo)
{
    int iCnt = 0;
    for(iCnt =1 ;iCnt <=iNo; iCnt++)  
    {
        printf("* ");
    }  
    for(iCnt =1 ;iCnt <=iNo; iCnt++)  
    {
        printf("# ");
    }  
    
}
int main()
{ 
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);

    Diplay(iValue);

    return 0;

}
