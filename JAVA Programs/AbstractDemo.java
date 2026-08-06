abstract class Arithmetic
{
    public int Addition(int no1,int no2)
    {
        return no1+no2;
    }
    public abstract int Substraction(int no1,int no2);
    
}
class Marvellous extends Arithmetic
{
    public int Substraction(int no1,int no2)
    {
        return no1-no2;
    }
}

class AbstractDemo
{
    public static void main(String args[])
    {
        //Arithmetic obj=new Arithmetic(); // not allowed due to class is abstracted.
        Marvellous mobj=new Marvellous();
        int Ret=0;
        Ret=mobj.Addition(11,21);
        System.out.println("Addition is "+Ret);
        Ret=mobj.Substraction(11,21);
        System.out.println("Substraction is "+Ret);
    }
}