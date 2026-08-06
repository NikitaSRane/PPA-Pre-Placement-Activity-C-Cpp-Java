import java.util.Scanner;

class ExceptionDemoSolution
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first number:");
        int iNo1=sobj.nextInt();
        System.out.println("Enter second number:");
        int iNo2=sobj.nextInt();

        try
        {
            int iAns=iNo1/iNo2;
            System.out.println("Divison is:"+iAns);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch1");
            System.out.println(obj);
        }
        catch(NullPointerException obj)
        {
            System.out.println("Inside catch2");
            System.out.println(obj);
        }
        catch(Exception obj)// generalized exception// upcasting 
        {
            System.out.println("Inside catch3");
            System.out.println(obj);
        }
        finally
        {
            System.out.println("Inside finally block");
            sobj.close();

        }
    }
}