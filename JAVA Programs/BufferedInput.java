import java.io.*;

class BufferedInput
{
    public static void main(String args[])
    {
        String name="";
        int age=0;
        float marks=0.0f;
        InputStreamReader iobj=new InputStreamReader(System.in);
        BufferedReader bobj=new BufferedReader(iobj);

        try
        {
            System.out.println("Enter your name");
            name=bobj.readLine();
            System.out.println("Enter the age");
            age=Integer.parseInt(bobj.readLine());
            System.out.println("Enter your marks");
            marks=Float.parseFloat(bobj.readLine()); 
        }
        catch(IOException obj)
        {

        }
        System.out.println(name);
        System.out.println(marks);
        System.out.println(age);
    }
}