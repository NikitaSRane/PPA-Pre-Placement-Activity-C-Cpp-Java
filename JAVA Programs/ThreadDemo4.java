class Demo extends Thread
{   
    public void run()
    {
        for(int i=0;i<=1000;i++)
        {
            System.out.println(i);
        }
    }
}

class ThreadDemo4
{
    public static void main(String args[])
    {
        System.out.println("Inside main method");
        Demo obj1=new Demo();
        Demo obj2=new Demo();
        Thread t1=new Thread(obj1);
        Thread t2=new Thread(obj2);
        t1.setName("First");
        t2.setName("Second");
        System.out.println("Name of thread1"+t1.getName());
        System.out.println("Name of thread1"+t2.getName());
        t1.start();
        t2.start();
    }
}