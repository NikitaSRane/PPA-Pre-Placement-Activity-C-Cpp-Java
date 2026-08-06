interface Circle
{
    float PI=3.14f; //public static final float PI=3.14f;
    float Area(float radius); // public abstract  float Area(float radius);
    float Circum(float radius); //public abstract float Circum(float radius);
}

class Marvellous implements Circle
{
    public float Area(float radius)
    {
        return PI*radius*radius;
    }

    public float Circum(float radius)
    {
        return 2*PI*radius;
    }
}

class InterfaceDemo
{
    public static void main(String args[])
    {
        System.out.println("Value of PI is "+Circle.PI);// public static
        //Circle.PI=7.2f; // static finatl variable
        Circle cobj=new Marvellous();
        float Ret=0.0f;
        Ret=cobj.Area(10.5f);
        System.out.println("Area of circle is: "+Ret);
        Ret=cobj.Circum(10.5f);
        System.out.println("Circumferance of Circle is:"+Ret);
    }
}