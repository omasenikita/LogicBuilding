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

    public int Frequency(int iNum)
    { 
        int i = 0, j = 0;
        int iCount = 0;
        for(i =0; i<Arr.length;i++)
        {
            for(j = 0; j<Arr[i].length;j++)
            {
                if(Arr[i][j] == iNum )
                {
                    iCount++;
                }
             
            }
        
        }
        return iCount;

    }

}
class Assignment44_2
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

        System.out.println("Enter a number u want to count the frequency:");
        int iValue = sobj.nextInt();

        int iRet =  mobj.Frequency(iValue);
        System.out.println("Frequency of number in the matrix is : "+iRet);
      
    }

}