
class StaticDemo
{
    static
    {
        System.out.println("Inside static block of StaticDemo class which contains main.");
    }
    public StaticDemo()
    {
        System.out.println("Inside constructor of StaticDemo");
    }

    public static void main(String args[])
    {
        
        System.out.println("Inside main");
        Demo.Gun();
        //Demo.Fun(); //Error
        System.out.println("Value of Static no3 "+Demo.no3);
        System.out.println("Value of Static no4 "+Demo.no4);

    
        Demo obj1=new Demo();
        Demo obj2=new Demo();
        obj1.Fun();
    }
}

class Demo{
    //non-static characteristics
    public int no1;
    public int no2;
    //static characteristics
    public static int no3;
    public static int no4;

    //static block
    static{
        System.out.println("Inside static block of Demo class");
        no3=51;
        no4=101;
    }

    //default constructor
    public Demo()
    {
        no1=11;
        no2=21;
        System.out.println("Inside constructor.");
    }

    public void Fun() //non-static method
    {
        System.out.println("Inside non-static method Fun");
        System.out.println("Value of non-Static no1 "+no1);
        System.out.println("Value of non-Static no2 "+no2);
        System.out.println("Value of Static no3 "+no3);
        System.out.println("Value of Static no4 "+no4);
    }
    public static void Gun() //static method
    {
        System.out.println("Inside static method Gun");
        //System.out.println("Value of non-Static no1 "+no1); //Error
        //System.out.println("Value of non-Static no2 "+no2); //Error
        System.out.println("Value of Static no3 "+no3);
        System.out.println("Value of Static no4 "+no4);
    }
}
