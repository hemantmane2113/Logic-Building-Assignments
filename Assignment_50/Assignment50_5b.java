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

        
        for(i = 1;i <= r;i++)
        {
            for(j = 1;j <= c;j++)
            {
                if ((j == 1) || (j==c))
                {
                    System.out.print(j + "  ");
                }
                else if(i == 1)
                {
                    System.out.print(j+ "  ");
                }
                else if(i == r)
                {
                   System.out.print(j + "  "); 
                }
                else if( i == j)
                {
                    System.out.print(j + "  "); 
                }
                else
                {
                    System.out.print(" " + "  "); 
                }
            }
            System.out.println();
        }
    }
}

class Assignment50_5b

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
