import java.util.*;

class Collections2
{
    public static void main(String args[])
    {
        LinkedList<String> lobj=new LinkedList<String>();
        lobj.add("Kapil");
        lobj.add("Aditya");
        lobj.add("Rahul");
        lobj.add("Pratik");
        System.out.println("Elements of linklist"+lobj);

        lobj.addFirst("Tejas");
        System.out.println("Elements of linklist"+lobj);

        lobj.addLast("Sneha");
        System.out.println("Elements of linklist"+lobj);

        Iterator<String> iobj=lobj.iterator();

        System.out.println("Data using iterator is :");

        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }

        lobj.remove();
        System.out.println("Elements of linklist"+lobj);

         if(lobj.contains("Sneha"))
        {
            System.out.println("Sneha is present in linkedlist.");
        }
        else
        {
            System.out.println("Sneha is not present in linkedlist.");
        }

        lobj.remove(1);
        System.out.println("Elements of linklist"+lobj);

        System.out.println("Elements of linklist"+lobj.size());

        lobj.set(1,"Dhruvi");
        System.out.println("Elements of linklist"+lobj);

        lobj.clear();
        System.out.println("Elements of linklist"+lobj);

    }
}