/////////////////////////////////////////////////////////////
// File Name :   Assignment13_2.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      A B C D
//               a b c d
//               A B C D
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0; 
    char ch1 = 'A'; 
    char ch2 = 'a'; 


    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,ch1 = 'A',ch2 = 'a';j <= iCol; j++,ch1++,ch2++)
        {
            if((i%2)==0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
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