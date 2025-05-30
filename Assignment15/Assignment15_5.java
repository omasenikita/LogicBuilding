/////////////////////////////////////////////////////////////
// File Name :   Assignment15_5.java
// Description : Used to Display pattern
// Input :       int, int    
// Output :      1 2 3 4
//               1 * * 4
//               1 * * 4
//               1 2 3 4
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
                if(((j==1)||(i==1)||(i==iRow)|| (j==iCol)))
                {
                    System.out.print(j + "\t");
                }
                else
                {
                    System.out.print("* \t");
                }
               

            }
             System.out.println();
        }


    }
}
class Assignment15_5
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