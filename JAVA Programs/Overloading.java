class Demo
{
    public void Fun()
    {
        System.out.println("Fuction without parameter");

    }
    public void Fun(int no)
    {
        System.out.println("Fun with one integer.");

    }
    public void Fun(int i, int j)
    {
        System.out.println("Fun with two interger");
    }
    public void Fun(double i)
    {
        System.out.println("Fun with double as parameter");
    }
}

class Overloading
{
    public static void main(String args[])
    {
        Demo obj=new Demo();
        obj.Fun();
        obj.Fun(11);
        obj.Fun(11,21);
        obj.Fun(44.21);
    }
}