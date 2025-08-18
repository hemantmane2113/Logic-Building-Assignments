import java.util.*;

class Pattern        
{
    int r,c;

    public Pattern(int iRow,int iCol)
    {
        r = iRow;
        c = iCol;
        System.out.println("Inside Constructor");
    }
    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;
        int num = c;
        
        for(i = 1;i <= r; i++)
        {   
            
            for(j = 1;j<=c;j++)
            {
                System.out.print(num + " ");
                num--;

                
            }
            System.out.println();

            num = c;
        }
    }
}

class Assignment47_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);

        pobj.DisplayPattern();


    }
}