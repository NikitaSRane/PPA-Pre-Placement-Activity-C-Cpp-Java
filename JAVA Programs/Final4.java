class A
{
    public int i;
    public int j;

    public A()
    {
        i=10;
        j=20;
    }
    public A(int a,int b)
    {
        i=a;
        j=b;
    }
}

class Final4
{
    public static void main(String args[])
    {
        A obj=new A();
        obj.i++;

        final A aobj=new A(12,13);
        aobj.j++; // allowed in java no such concept of final object
    }
}