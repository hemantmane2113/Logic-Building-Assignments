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

    public boolean CheckSparse()
    {
        int i = 0,j = 0,iCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
              if(Arr[i][j] == 0)
              {
                iCount++;
              }
            }
               
        }
        System.out.println("Total number of zeros in a matrix are: "+iCount); 

        if(iCount > (Arr.length *Arr[0].length / 2))
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
}
class Assignment45_5
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

        mobj.Display();

        boolean bRet = false;

        bRet = mobj.CheckSparse();

        if(bRet == true)
        {
            System.out.println("The given matrix is sparse matrix");
        }
        else 
        {
            System.out.println("The given matrix is not sparse matrix");
        }

        

        
    }
}