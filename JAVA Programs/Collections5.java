import java.util.*;

class Collections5
{
    public static void main(String args[])
    {
        ArrayList<Float> aobj=new ArrayList<Float>();
        aobj.add(10.6f);
        aobj.add(20.6f);
        aobj.add(30.6f);
        aobj.add(40.6f);
        aobj.add(50.6f);

        //aobj.addFirst(10.65f); not supported in ArrayList
        //aobj.addLast(112.758f);


        Iterator<Float> iobj=aobj.iterator();

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
        aobj.clear();

    }
}