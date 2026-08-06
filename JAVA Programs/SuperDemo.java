class Base
{
    public int a,b;
    public Base(int No1, int No2)
    {
        this.a=No1;
        this.b=No2;
    }
    public void Fun()
    {
        System.out.println("Inside base Fun");
        System.out.println("Value of b in fun method is"+this.b);
    }
}

class Derived extends Base
{
    public int x,y;
    public Derived(int i, int j, int k, int l)
    {
        //Base(k,l); NA
        super(k,l); // usecase 1
        this.x=i;
        this.y=j;
    }
    public void Gun()
    {
        System.out.println("Inside derived gun");
        System.out.println("Value of a from gun method is"+super.a); //usecase 2
        super.Fun(); //usecase 3
        //Base.Fun(); NA
    }
}

class SuperDemo
{
    public static void main(String args[])
    {
        //Base dobj=new Derived(11,21,51,101); //NA

        Derived dobj=new Derived(11,21,51,101);
        dobj.Gun();
    }
}