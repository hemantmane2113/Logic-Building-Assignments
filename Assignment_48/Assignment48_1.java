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
        
        for(i = 0;i < s.length(); i++)//not <=..string index 0 -str.length()-1
        {   
            
            for(j = 0;j < s.length();j++)
            {
                System.out.print(s.charAt(j) + " ");
            }
            System.out.println();
        }
    }
}

class Assignment48_1
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