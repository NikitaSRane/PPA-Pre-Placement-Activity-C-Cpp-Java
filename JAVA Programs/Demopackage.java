import java.util.*; //inbuilt package
import Marvellous.Arithmetic; //user-defined package
import Marvellous.PPA.Loop;

class Demopackage
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter first number");
        int ino1=sobj.nextInt();
        System.out.println("Enter second number");
        int ino2=sobj.nextInt();
        Arithmetic aobj=new Arithmetic(ino1,ino2);
        int Add=aobj.Addition();
        System.out.println("Addition is "+Add);
        int Sub=aobj.Substraction();
        System.out.println("Substraction is "+Sub);

        Loop lobj=new Loop();
        lobj.Display();
    }
}



