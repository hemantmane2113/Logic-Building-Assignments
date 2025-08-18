import java.util.*;

class Pattern //class
{
    public void DisplayPattern(int iRow,int iCol)//method
    {
        int i = 0;
        int j = 0;
        char ch = 'A';

        for(i = 1;i <= iRow; i++)
        {
            for(j = 1,ch = 'A';j<=iCol;j++)
            {
                System.out.print(ch+ " ");

                ch++;
            }
            System.out.println();
        }
    }
}

class Assignment46_1a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern();//object creation

        pobj.DisplayPattern(iRow,iCol);//method call


    }
}