import java.util.*;

class Pattern        //class
{
    int r,c;//instance variables

    public Pattern(int iRow,int iCol)//constructor(same name as class and no use of void)
    {
        r = iRow;
        c = iCol;
        System.out.println("Inside Constructor");
    }
    public void DisplayPattern()//method of the class
    {
        int i = 0;
        int j = 0;
        

        for(i = 1;i <= r; i++)
        {   
            char ch = 'A';
            for(j = 1;j<=c;j++)
            {
                System.out.print(ch+ " ");

                ch++;
            }
            System.out.println();
        }
    }
}

class Assignment46_1c//main class
{
    public static void main(String A[])//main method
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int iRow = sobj.nextInt();

        System.out.print("Enter number of columns: ");
        int iCol = sobj.nextInt();

        Pattern pobj = new Pattern(iRow,iCol);//object pobj of class Pattern is created
        //new Pattern(iRow,iCol) calls the constructor and sets r and c
        //that means pobj.r  = iRow and pobj.c = iCol

        pobj.DisplayPattern();//method call


    }
}