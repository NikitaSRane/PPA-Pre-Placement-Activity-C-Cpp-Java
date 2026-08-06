import java.util.Scanner;

class Data
{
    public int no;
    public int Arr[];

    public Data(int size)
    {
        no=size;
        Arr=new int[no];
    }
    public void Accept()
    {
        System.out.println("Enter the elements");
        Scanner sobj=new Scanner(System.in);
        for(int iCnt=0;iCnt<no;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

    }
    protected void finalize()
    {
        Arr=null;
    }
}
class DemoEven extends Thread
{
    Data dobj;
    public DemoEven(Data obj)
    {
        dobj=obj;
    }

    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if((dobj.Arr[i]%2)==0)
            {
                System.out.println("Even number is "+dobj.Arr[i]);
            }
        }
    }
}
class DemoOdd extends Thread
{
    Data dobj;

    public DemoOdd(Data obj)
    {
        dobj=obj;
    }

    public void run()
    {
        for(int i=0;i<dobj.Arr.length;i++)
        {
            if((dobj.Arr[i]%2)==1)
            {
                System.out.println("Odd number is "+dobj.Arr[i]);
            }
        }
    }
}

class ThreadDemo6
{
    public static void main(String args[])
    {
        Data obj=new Data(10);
        obj.Accept();
        DemoEven eobj=new DemoEven(obj);
        DemoOdd oobj=new DemoOdd(obj);

        Thread t1=new Thread(eobj);
        Thread t2=new Thread(oobj);
        t1.start();
        t2.start();
        try
        {
            t1.join();
            t2.join();
        }

        catch(InterruptedException e)
        {
            System.out.println(e);
        }
    }

}