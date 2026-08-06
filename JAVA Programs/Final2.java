class Base
{
    public Base()
    {

    }
    public void Fun()
    {

    }
    final public void Gun() //definition
    {

    }
}
class Derived extends Base
{
    public void Gun() //function overriding 
    {
        
    }
    public void Gun(int a) // function overloading
    {

    }
}
class Final2
{
    public static void main(String args[])
    {   
        Base obj=new Derived();

    }
}