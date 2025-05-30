/////////////////////////////////////////////////////////////
// File Name :   Assignment13_4.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      4 4 4 4 4
//               3 3 3 3 3 
//               2 2 2 2 2
//               1 1 1 1 1
// Author :      Nikita Shahaji Omase
// Date :        27/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0; 
 
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1;j <= iCol; j++)
        {
           
                printf("%d \t",i);
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