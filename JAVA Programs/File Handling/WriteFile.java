import java.io.*;

class WriteFile
{
    public static void main(String args[]) throws Exception
    {
        FileOutputStream fobj=new FileOutputStream("Marvellous.txt");
        String data="Marvellous Infosystems pune.";

        byte[] bdata=data.getBytes();

        fobj.write(bdata);
        System.out.println("Writed completely");

        fobj.close();
    }
}