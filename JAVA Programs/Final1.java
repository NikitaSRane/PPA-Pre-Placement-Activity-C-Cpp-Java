class Demo
{
    public int no1;
    final public int no2=21;
    final public int no3;

    public Demo()
    {
        no1=11;
        no3=51;
    }
}

class Final1
{
    public static void main(String args[])
    {
        int i=20;
        final int j=30;
        Demo obj=new Demo();
        obj.no1=obj.no1+2;
        System.out.println(obj.no1);
        System.out.println(i);
        //System.out.println(j++); //NA
        //obj.no2++; //NA
        //obj.no3++; //NA

    }
}