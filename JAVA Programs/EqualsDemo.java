class Demo{
    public int no1;
    public int no2;

    public Demo(int a, int b)
    {
        no1=a;
        no2=b;
    }
}

class EqualsDemo
{
    public static void main(String args[])
    {
        Demo obj1=new Demo(11,21);
        Demo obj2=new Demo(11,21);

        System.out.println("€Hashcode of object1"+obj1.hashCode());
        System.out.println("€Hashcode of object2"+obj2.hashCode());

        if(obj1.equals(obj2))
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }
        if(obj1==obj2)
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }

        String s1="Hello";
        String s2="Hello";
        
        System.out.println("€Hashcode of object1"+s1.hashCode());
        System.out.println("€Hashcode of object2"+s2.hashCode());

        if(s1.equals(s2))
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }

        if(s1==s2)
        {
            System.out.println("Objects are same");
        }
        else
        {
            System.out.println("Objects are different");
        }
    }
}
