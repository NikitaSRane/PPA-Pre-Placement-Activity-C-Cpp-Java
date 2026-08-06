import java.util.*;

class Book
{
    public String name;
    public int price;

    public Book(String bookname, int value)
    {
        name=bookname;
        price=value;
    }

    public void Display()
    {
        System.out.println("Name of book is: "+name);
        System.out.println("Price of book is: "+price);
    }
}

class Collections4
{
    public static void main(String args[])
    {
        LinkedList<Book> lobj=new LinkedList<Book>();
        Book bobj=new Book("Let us C",400);
        lobj.add(bobj);
        lobj.add(new Book("Datastrucutres",580));
        lobj.add(new Book("C++ Programming",980));
        lobj.add(new Book("Angular web developement",790));

        Iterator<Book> iobj=lobj.iterator();

        Book bref=null;

        while(iobj.hasNext())
        {
            bref=iobj.next();
            bref.Display();
        }

        System.out.println("Elements of linked list are: "+lobj);

        lobj.clear();



    }
}