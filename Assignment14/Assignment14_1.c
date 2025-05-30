/////////////////////////////////////////////////////////////
// File Name :   Assignment14_1.c
// Description : Used to Display pattern
// Input :       int, int    
// Output :      1 2 3 4
//               5 6 7 8
//               9 1 2 3
//               4 5 6 7
// Author :      Nikita Shahaji Omase
// Date :        23/05/2025
////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,iCnt = (i-1)*iCol+1;j <= iCol; j++,iCnt++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }
            printf("%d\t",iCnt);
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
