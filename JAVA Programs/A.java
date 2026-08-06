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