class Demo extends Thread
{   
    public void run()
    {
        for(int i=0;i<=10;i++)
        {
            System.out.println(i);
        }
    }
}

class ThreadDemo5
{
    public static void main(String args[]) throws InterruptedException
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
        t1.setPriority(10);
        System.out.println("End of main");
        try
        {
            Thread.sleep(500); 

        }
        catch(InterruptedException obj)
        {
            System.out.println(obj);
        }
        t1.join();
        t2.join();
        
        System.out.println("Priority of t1"+t1.getPriority());
        System.out.println("Priority of t2"+t2.getPriority());
             
    }
}