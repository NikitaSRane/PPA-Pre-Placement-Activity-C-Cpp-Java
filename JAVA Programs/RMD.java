class Base
{
    public void Fun()
    {
        System.out.println("Inside base Fun");
    }
    public void Gun()
    {
        System.out.println("Inside Base Gun");
    }
    public void Sun()
    {
        System.out.println("Inside Base Sun");
    }
}

class Derived extends Base
{
    public void Fun()
    {
        System.out.println("Inside Derived fun");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
    public void Run()
    {
        System.out.println("Inside Derived Run");
    }
}

class RMD
{
    public static void main(String args[])
    {
        Base bobj=new Derived();
        bobj.Fun(); //derived
        bobj.Gun(); //derived
        bobj.Sun(); //base
        //bobj.Run(); Error
    }
}