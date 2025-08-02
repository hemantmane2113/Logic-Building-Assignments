import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A,int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i=0; i < Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are: ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");     
            }
            System.out.println();
        }  
    }

    public void Transpose()//works for sqaure as well as non square matrix
    {
        int rows = Arr.length;
        int cols = Arr[0].length;

        int[][] Transposed = new int[cols][rows];

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                Transposed[j][i] = Arr[i][j];
            }
        }
        Arr = Transposed; 
    }
}
class Assignment45a_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        
        System.out.println("Matrix before Transpose");
        mobj.Display();

        mobj.Transpose();

        System.out.println("Matrix after Transpose");
        mobj.Display();
    }
}