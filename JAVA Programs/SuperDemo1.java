class A
{
    public A(int a)
    {
        System.out.println(a);
    }
    public void Fun()
    {
        System.out.println("Inside Fun");
    }
}

class B extends A
{
   
    public B(int a,int b)
    {
        super(b);
        System.out.println("Inside B constructor");
        System.out.println(a);
        super.Fun();
    }
    
    public void Gun()
    {
        System.out.println("Inside Gun.");
    }
}

class SuperDemo1
{
    public static void main(String args[])
    {
        B obj=new B(11,10);
        obj.Fun();
    }
}