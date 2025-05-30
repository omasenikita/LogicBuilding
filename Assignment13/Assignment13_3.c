/////////////////////////////////////////////////////////////
// File Name :   Assignment13_3.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      A A A A
//               B B B B
//               C C C C
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0; 
    char ch = 'A'; 


    for(i = 1,ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1;j <= iCol; j++)
        {
           
                printf("%c\t",ch);
        }
        printf("\n");

    }
   

}
int main()
{
    int iValue1 = 0,iValue2 = 0 ;

    printf("Enter the number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}