package Marvellous;

public class Arithmetic
{
    public int ino1;
    public int ino2;
    public int ires;

    public Arithmetic(int value1,int value2)
    {
        ino1=value1;
        ino2=value2;
        ires=0;
    }

    public int Addition()
    {
        ires=ino1+ino2;
        return ires;
    }
    public int Substraction()
    {
        ires=ino1-ino2;
        return ires;
    }
}