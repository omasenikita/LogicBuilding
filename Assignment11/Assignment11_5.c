/////////////////////////////////////////////////////////////
// File Name :   Assignment11_5.c
// Description : Used to print alphabets
// Input :       int
// Output :      2 4 6 8 10 12
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0; 
    int iNum = 2; 
    
    while(iCnt < iNo)
    {
        if((iNum % 2)==0)

       {
         iCnt++;
        printf("%d \t",iNum);
        
       }
       iNum ++; 
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