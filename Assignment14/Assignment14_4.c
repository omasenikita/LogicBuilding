/////////////////////////////////////////////////////////////
// File Name :   Assignment14_4.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      1  2   3  4  5
//              -1 -2 -3 -4  -5
//               1  2   3  4  5                
//               -1 -2 -3 -4  -5
//               1  2   3  4  5  
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0,k = 0; 
    int iCnt = 1;
    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,k = -1; k <= iCol,j <= iCol; j++ ,k--)
        {
            if((i%2)==0)
            {
                 printf("%d\t",k);
            }
            else
            {
                printf("%d\t",j);
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