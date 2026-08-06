import java.io.*;

class BufferedInput
{
    public static void main(String args[]) throws IOException
    {

        InputStreamReader iobj=new InputStreamReader(System.in);
        BufferedReader bobj=new BufferedReader(iobj);

        System.out.println("Enter your name");
        String name=bobj.readLine();
        System.out.println("Enter the marks");
        int marks=Integer.parseInt(bobj.readLine());
        System.out.println("Enter your age");
        int age=Integer.parseInt(bobj.readLine()); 

        System.out.println(name);
        System.out.println(marks);
        System.out.println(age);
    }

}