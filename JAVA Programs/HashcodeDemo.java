class Demo{
    public int no1;
    public int no2;

    public Demo(int a, int b)
    {
        no1=a;
        no2=b;
    }
}

class HashcodeDemo
{
    public static void main(String args[])
    {
        Demo obj=new Demo(11,21);
        System.out.println("€Hashcode of object"+obj.hashCode());
    }
}
