import java.util.*;

class Pattern //class
{
    int r,c;

    public Pattern(int iRow,int iCol)//constructor
    {
        int i = 0;
        int j = 0;
        r = iRow;
        c = iCol;
        

        for(i = 1;i <= iRow; i++)
        {
            char ch = 'A';
            for(j = 1;j<=iCol;j++)
            {
                System.out.print(ch+ " ");

                ch++;
            }
            System.out.println();
        }
    }
}

class Assignment46_1b
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);//object creation calls constructor automatically

    }
}
