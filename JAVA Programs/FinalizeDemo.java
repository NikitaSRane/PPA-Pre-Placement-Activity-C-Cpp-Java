class Demo
{
    int size;
    int Arr[];

    public Demo(int No)
    {
        size=No;
        Arr=new int[size];
        System.out.println("Inside constructor");
    }
    protected void finalize()
    {
        System.out.println("Inside finalize method");
        Arr=null;
    }
}

class FinalizeDemo
{
    public static void main(String args[])
    {
        Demo obj= new Demo(4);
        obj=null;
        System.gc();
    }
}