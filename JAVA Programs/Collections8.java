import java.util.*;

class Collections8
{
    public static void main(String args[])
    {
        Hashtable<String,Integer> hobj=new Hashtable<String,Integer>();

        hobj.put("PPA",18000);
        hobj.put("LB",17000);
        hobj.put("Python",16500);
        hobj.put("Angular",16000);

        System.out.println("Elements in Hashtable: "+hobj);

        Enumeration<String> keys=hobj.keys();

        while(keys.hasMoreElements())

    
        {
            System.out.println("Key:"+keys.nextElement()+" Values:"+hobj.get(keys.nextElement()));

        }

        hobj.remove("LB");

        System.out.println("Elements in Hashtable: "+hobj);

        System.out.println(hobj.get("Python"));

    }
}