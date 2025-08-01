import java.util.*;

class Matrix
{
    private int Arr[][];
    private int Trr[][];
  
    public Matrix(int A, int B)
    {
        Arr = new int[A][B];   
         Trr = new int[B][A]; 
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

     public void Transpose()
    {
 
        System.out.println("Transpose matrix elemnets are:");
        int i , j;
        for(i = 0; i < Trr.length;i++)
        {
            for(j = 0; j <Trr[i].length; j++)
            {
                Trr[i][j] = Arr[j][i];
                System.out.print(Trr[i][j]+"\t");
            }
            System.out.println();
        }
        
       
    }
    
    }
class Assignment45_1
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
        mobj.Transpose();


    }
}