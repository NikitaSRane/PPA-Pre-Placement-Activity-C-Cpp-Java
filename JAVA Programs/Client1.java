import java.net.*;
import java.io.*;

public class Client1
{
    public static void main(String args[]) throws Exception
    {
        System.out.println("Client application is running");

        Socket s=new Socket("localhost",2100); // connect with server
        System.out.println("Client is waiting for server to accept the request");

        PrintStream ps=new PrintStream(s.getOutputStream()); // for exchange message
        BufferedReader br1=new BufferedReader(new InputStreamReader(s.getInputStream())); // message from server
        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in)); // input from keyboard

        String str1,str2;
        
        ps.println(br2.readLine());// send message to server
        while ((str1 = br1.readLine()) != null && !str1.equals("end"))
        {
            System.out.println("Server says: "+str1);
            System.out.print("Enter message for server :"); 
            str2=br2.readLine(); 
            ps.println(str2);
            ps.flush();
        }
        ps.close();
        br1.close();
        br2.close();
        s.close();
    }
}