    import java.util.*;

    class Collection1
    {
        public static void main(String args[])
        {
            LinkedList<Integer> lobj=new LinkedList<Integer>();
            lobj.add(11);
            lobj.add(21);
            lobj.add(51);
            lobj.add(111);
            System.out.println("Elements of linklist"+lobj);

            lobj.addFirst(1);
            System.out.println("Elements of linklist"+lobj);

            lobj.addLast(121);
            System.out.println("Elements of linklist"+lobj);

            Iterator<Integer> iobj=lobj.iterator();

            System.out.println("Data using iterator is :");

            while(iobj.hasNext())
            {
                System.out.println(iobj.next());
            }

            lobj.remove();
            System.out.println("Elements of linklist"+lobj);

            if(lobj.contains(121))
            {
                System.out.println("121 is present in linkedlist.");
            }
            else
            {
                System.out.println("121 is not present in linkedlist.");
            }

            lobj.remove(1);
            System.out.println("Elements of linklist"+lobj);

            System.out.println("Elements of linklist"+lobj.size());

            lobj.set(1,500);
            System.out.println("Elements of linklist"+lobj);

            lobj.clear();
            System.out.println("Elements of linklist"+lobj);

        }
    }