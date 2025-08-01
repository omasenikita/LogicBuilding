import java.util.*;

class Matrix
{
    private int Arr[][];
  
    public Matrix(int A, int B)
    {
        Arr = new int[A][B];   
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elemnets:");
        int i , j;
        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j <Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
        
       
    }

     public void Display()
    {
        System.out.println("Original matrix elemnets are:");
        int i , j;
        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j <Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
        
       
    }

     public void Reverse()
    {
 
        System.out.println("matrix after reversing the elemnts in rows are:");
        int i , j;
        for(i = 0; i <Arr.length;i++)
        {
            for(j = (Arr[i].length-1); j >= 0; j--)
            {
                System.out.print(Arr[i][j]+"\t");
               
            }
            System.out.println();
        }
        
       
    }
    
    }
class Assignment45_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow , iCol;
        System.out.println("Enter the number of rows :");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns :");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.Reverse();


    }
}