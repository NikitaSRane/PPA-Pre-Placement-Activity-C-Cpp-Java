class Maths
{
    public int ino1;
    public int ino2;

    public Maths()
    {
        ino1=0;
        ino2=0;
        System.out.println("Inside constructor");
    }
    public Maths(int a,int b)
    {
        ino1=a;
        ino2=b;
        System.out.println("Inside parameterized constructor");
    }
    public int Addition()
    {
        int ans=0;
        ans=ino1+ino2;
        return ans;
    }
    public int Substraction()
    {
        int ans=0;
        ans=ino1-ino2;
        return ans;
    }
}

class Demo
{
    public static void main(String args[])
    {
        System.out.println("Inside Main");
        Maths mobj1=new Maths();
        Maths mobj2=new Maths(11,21);
        int res=0;
        res=mobj1.Addition();
        System.out.println("Addition is "+res);
        res=mobj2.Addition();
        System.out.println("Addition is "+res);
    }
}