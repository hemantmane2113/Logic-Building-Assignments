import java.util.*;

class Pattern 
{
    int r;
    int c;

    public Pattern(int iRow, int iCol) 
    {
        System.out.println("Inside Constructor");
        r = iRow;
        c = iCol;
    }

    public void DisplayPattern() 
    {
        int urCount = 2;  // top row counter
        int lrCount = 2;  // bottom row counter
        int dCount  = 2;  // diagonal counter

        for(int i = 1; i <= r; i++) 
        {
            for(int j = 1; j <= c; j++) 
            {
                if (j == 1) //both conditions can be combined
                {
                    System.out.print(j + " ");
                } 
                else if(j == c) 
                {
                    System.out.print(j + " ");
                } 
                else if(i == 1) 
                {
                    System.out.print(urCount + " ");
                    urCount++;
                } 
                else if(i == r) 
                {
                    System.out.print(lrCount + " ");
                    lrCount++;
                } 
                else if(i == j) 
                {
                    System.out.print(dCount + " ");
                    dCount++;
                } 
                else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}

class Assignment50_5a 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int iRow = sobj.nextInt();
        
        System.out.println("Enter the number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow, iCol);
        pobj.DisplayPattern();
    }
}
