/////////////////////////////////////////////////////////////
// File Name :   Assignment15_3.java
// Description : Used to Display pattern
// Input :       int, int    
// Output :      $ * * * *
//               * $ * * *
//               * * $ * *
//               * * * $ *
//               * * * * $
// Author :      Nikita Shahaji Omase
// Date :        26/05/2025
////////////////////////////////////////////////////////////

import java.util.*;
class Pattern
{
    void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        for(i = 1; i<=iRow; i++)
        {
            for(j = 1; j <= iCol ;j++ )
            {
                if( i == j)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print("*\t");
                }
               

            }
             System.out.println();
        }


    }
}
class Assignment15_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of row :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of column : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);



    }
}