class A
{
    public int i;
    public int j;

    public A()
    {
        System.out.println("Inside A constructor");
        i=10;
        j=20;
    }
    public void Fun()
    {
        System.out.println("Value of i is"+i);
        System.out.println("Value of j is"+j);
    }
}
class B
{
    public B()
    {
        System.out.println("Inside B constructor");
        i=30;
        j=40;
    }
    public void Fun()
    {
        System.out.println("Value of i is"+i);
        System.out.println("Value of j is"+j);
    }
}
class C extends A,B
{
    public C()
    {
        System.out.println("Inside C constructor");
    }
    
}
class Multiple
{
    public static void main(String args[])
    {
        C obj=new C();
        obj.Fun();
        obj.Fun();
    }
}