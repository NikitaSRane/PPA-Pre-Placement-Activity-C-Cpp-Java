import java.util.Scanner;

class UserException
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the age");
        int age=sobj.nextInt();

        try
        {
            if(age<15)
            {
                AgeInvalidException aobj=new AgeInvalidException("Your age is less than 15");
                throw aobj; 
                //throw new AgeInvalidException("Your age is less than 15");
            }
            else
            {
                System.out.println("Age is valid");
            }
        }
        catch(AgeInvalidException obj)
        {
            System.out.println(obj);
        }
        
    }
}

class AgeInvalidException extends Exception
{
    AgeInvalidException(String str)
    {
        super(str);
    }
}