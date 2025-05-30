/////////////////////////////////////////////////////////////
// File Name :   Assignment14_3.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      a b c d e
//               1 2 3 4 5
//               a b c d e
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0; 
    char ch ='a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch ='a';j <= iCol; j++,ch++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%c\t",ch);
            }
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