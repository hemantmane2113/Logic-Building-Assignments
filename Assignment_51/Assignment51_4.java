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
            for(j=0; j < Arr[i].length; j++)
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

    public double Trace()
    {
        int i = 0,j = 0;
        double dTrace = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if( i == j)
                {
                    dTrace = dTrace + Arr[i][j];
                }
            }  
        }
        return dTrace; //sum of elements of main diagonal matrix
    }

        public double Normal()
    {
        int i = 0,j = 0;
        double dTrace = 0,dNormal = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if( i == j)
                {
                    dTrace = dTrace + (Arr[i][j] * Arr[i][j]);
                }
            } 
            dNormal = Math.sqrt(dTrace); 
        }
        return dNormal;// sqaure root of sum of sqaure of each element on main diagonal
    }


}
class Assignment51_4
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

        double dRet = 0;
        dRet = mobj.Trace();
        System.out.println("The Trace of given matrix is: "+ dRet);


        dRet = mobj.Normal();
        System.out.println("The Normal of given matrix is: "+ dRet);

    }
}