import java.util.*;

class Pattern        
{
    String  s;

    public Pattern(String word)
    {   
        s = word;
       
        System.out.println("Inside Constructor");
    }
    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;
        int len = s.length();
        
        for(i = 0;i < len; i++)
        {   
            
            for(j = 0 ;j < len - i;j++)
            {
                System.out.print(s.charAt(j) + " ");
            }
            System.out.println();
            //len--;
        }
    }
}

class Assignment48_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String word = sobj.next();

       
        Pattern pobj = new Pattern(word);

        pobj.DisplayPattern();


    }
}