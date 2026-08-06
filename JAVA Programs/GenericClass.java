class Demo<T>
{
    public T No1;
    public T No2;

    public Demo(T A, T B)
    {
        No1=A;
        No2=B;
    }

    public void Display()
    {
        System.out.println(No1);
        System.out.println(No2);
    }

}

class GenericClass
{
    public static void main(String args[])
    {
        Demo<Integer> iobj=new Demo<Integer>(11,21);
        iobj.Display();

        Demo<Character> cobj=new Demo<Character>('A','B'); 
        cobj.Display();

    }
}
