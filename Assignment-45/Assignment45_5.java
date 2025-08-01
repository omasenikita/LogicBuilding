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

     public void SparseMatrix()
    {
 
        int i = 0 , j = 0;
        int count = 0;
        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j <Arr[i].length; j++)
            {
                if(Arr[i][j] == 0)
                {
                    count++;
                }
            }
            
        }
        if(count > ((Arr.length * Arr[0].length) / 2))
        {
            System.out.println("It is a Sparse Matrix");
        }
        else
        {
            System.out.println("It is not a Sparse Matrix");
        }
    }
    
    }
class Assignment45_5
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
        mobj.SparseMatrix();


    }
}