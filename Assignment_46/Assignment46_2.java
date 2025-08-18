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
        

        for(i = 1;i <= r; i++)
        {   
            char ch = 'A';
            for(j = 1;j<=c;j++)
            {   
                if(i % 2 != 0)
                {
                    System.out.print(ch+ " ");

                    ch++;
                }
                else
                {   
                    
                    System.out.print((char)(ch + 32) + " ");

                    ch++; 
                }

            }
            System.out.println();
        }
    }
}

class Assignment46_2
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