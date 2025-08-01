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
        Scanner sobj= new Scanner(System.in);
        System.out.println("Enter the elements:");

        int i = 0, j = 0;
        for(i =0; i<Arr.length;i++)
        {
            for(j = 0; j<Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        
        }

    }

    public void Display()
    { 
        System.out.println("Elements are:");

        int i = 0, j = 0;
        for(i =0; i<Arr.length;i++)
        {
            for(j = 0; j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        
        }

    }

    public void SwapConRows()
    { 
        int i = 0, j = 0;
        
        
        System.out.println("Swaping :");
        for(i =0; i<Arr.length;i++)
        {int temp = 0;
            for(j = 0; j<Arr[i].length;j++)
            {
                if(i%2==0)
                {
                    temp = Arr[i][j];
                    Arr[i][j] = Arr[i+1][j]; 
                    Arr[i+1][j] = temp;
                    System.out.print(Arr[i][j]+"\t");
                    }
                    else
                    {
                    System.out.print(Arr[i][j]+"\t");
                    }


            }
            
     System.out.println();
        }
       
        
    }
}
class Assignment44_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iRows = sobj.nextInt();

        System.out.println("Enter number of Columns:");
        int iCols = sobj.nextInt();

        Matrix mobj = new Matrix(iRows,iCols);
        mobj.Accept();
        mobj.Display();

        mobj.SwapConRows();
      
    }

}