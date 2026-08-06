import java.util.Scanner;

class Arithmetic 
{
    public int Division(int a, int b) throws ArithmeticException
    {
        int Ans=0;
        Ans=a/b;
        return Ans;
    }
}

class ThrowsDemo
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first number");
        int ino1=sobj.nextInt();
        System.out.println("Enter second number");I
        int ino2=sobj.nextInt();

        try
        {
            Arithmetic obj=new Arithmetic();
            int iAns=obj.Division(ino1,ino2);
            System.out.println("Division is"+iAns);
        }
        catch(ArithmeticException obj)
        {
            System.out.println(obj);
        }

        }
}