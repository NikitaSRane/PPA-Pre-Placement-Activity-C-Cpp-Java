import java.net.*;
import java.io.*;

public class Server1
{
    public static void main(String args[]) throws Exception
    {
        System.out.println("Server application is running");

        ServerSocket ss=new ServerSocket(2100); // create server on port 2100
        System.out.println("Server is running at port number 2100 and waiting for client request");

        Socket s=ss.accept(); // accept request from client
        System.out.println("Request of client gets accepted");

        PrintStream ps=new PrintStream(s.getOutputStream()); // for exchange message
        BufferedReader br1=new BufferedReader(new InputStreamReader(s.getInputStream())); // message from client
        BufferedReader br2=new BufferedReader(new InputStreamReader(System.in)); // input from keyboard

        String str1,str2;
        while ((str1 = br1.readLine()) != null)
        {
            System.out.println("Client says: "+str1);
            System.out.print("Enter message for client :");
            str2=br2.readLine();
            ps.println(str2);
            ps.flush();
        }
        ps.close();
        br1.close();
        br2.close();
        s.close();
        ss.close();
    }
}