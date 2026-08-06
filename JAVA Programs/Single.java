class Base // class Base extends Object
{
    public int a,b; //8 bytes
    public Base()
    {
        System.out.println("Inside base constructor.");
        this.a=10;
        this.b=20;
    }
    public void Fun() // function definition
    {
        System.out.println("Inside Base Fun");
    }
    public void Gun() //function definition
    {
        System.out.println("Inside Base Gun.");
    }
    public void Fun(int no) // function overloading definition
    {
        System.out.println("Inside Base Fun with one integer");
    }
}

class Derived extends Base
{
    public int x,y; // 8 bytes 
    public Derived()
    {
        System.out.println("Inside Derived constructor");
        this.x=30;
        this.y=40;
    }
    public void Sun() //definition
    {
        System.out.println("Inside Derived Sun");
    }
    public void Gun()// overrided definition
    {
        System.out.println("Inside Derived Gun");
    }
}

class Single
{
    public static void main(String args[])
    {
        //Base bobj1=new Base(); //no casting
        Derived dobj1=new Derived(); //no casting

        Base bobj2=new Derived(); //upcasting
        //Derived dobj2=new Base(); //downcasting (not allowed)

        dobj1.Fun();
        dobj1.Sun();
        dobj1.Fun(11);
        dobj1.Gun();
        bobj2.Fun();
        bobj2.Fun(20);
        bobj2.Gun(); //runtime method dispatch
        //bobj2.Sun();
    }
}

