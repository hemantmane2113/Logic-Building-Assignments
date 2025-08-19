import java.util.*;

class Pattern//class
{
    int r;
    int c;

    public Pattern(int iRow,int iCol)//conrstructor
    {
        System.out.println("Inside Constructor");
        r = iRow;
        c = iCol;
    }
    public void DisplayPattern()//method
    {
        int i = 0;
        int j = 0;
        
        for(i = r-1;i >= 0;i--)
        {
            for(j = 0;j < c;j++)
            {
                if( i == j)
                {
                    System.out.print('#' + "  ");
                }
                else
                {
                    System.out.print('*' + "  ");
                }
            }
            System.out.println();
        }
    }
}

class Assignment50_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);

        pobj.DisplayPattern();
    }
}
