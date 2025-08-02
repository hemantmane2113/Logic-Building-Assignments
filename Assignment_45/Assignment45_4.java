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

    public boolean CheckIdentity()
    {

        int rows = Arr.length;
        int cols = Arr[0].length;

        // Step 1: Check if matrix is square
        if (rows != cols) 
        {
            return false;
        }
        
        int i = 0,j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((i == j)&&(Arr[i][j] != 1))
                {
                    return false;
                      
                }
                else if((i != j)&&(Arr[i][j] != 0))
                {
                    return false;
                }
                
            }    
        }
        return true;
    }
}
class Assignment45_4
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

        bRet = mobj.CheckIdentity();

        if(bRet == true)
        {
            System.out.println("The given matrix is identity matrix");
        }
        else 
        {
            System.out.println("The given matrix is not identity matrix");
        }

        

        
    }
}