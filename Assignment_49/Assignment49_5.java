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


        for(i = 0;i < len; i++)//i = 0
        {   
            
            for(j = 0 ;j < len;j++)//j = 0
            {
                if((i > j) || (i == j))
                {
                    System.out.print(s.charAt(j) + " ");
                }
                else
                {
                   System.out.print('*' + " "); 
                }  
            }
            System.out.println();
        }
        
        for(i = len - 2;i >= 0 ; i--)// i = len -2
        {   
            
            for(j = 0 ;j < len ;j++)///j  = 0 
            {   
                if((i == j) ||(i > j))
                {
                    System.out.print(s.charAt(j) + " ");
                }
                else
                {
                   System.out.print('*' + " "); 
                }
            }
                
            System.out.println();   
        }
        
    }
}

class Assignment49_5
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