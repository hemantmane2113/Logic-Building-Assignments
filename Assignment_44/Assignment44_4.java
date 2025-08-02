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

    public void ColumnWiseAddition()
    {
        int i = 0,j = 0,iSum = 0;

        for(j = 0; j < Arr[0].length; j++)
        //Arr.length = total number of rows and
        //Arr[0].length == total elements in 1st row...indirectly total number of columns
        {   
            iSum = 0;//reset iSum to zero
            for(i = 0;i < Arr.length;i++)
            {   
               iSum = iSum + Arr[i][j];
            } 
            System.out.println("The Addition of column number "+ j + " is: "+ iSum) ;  
        }
        
    }
}
class Assignment44_4
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

        mobj.ColumnWiseAddition();

    }
}