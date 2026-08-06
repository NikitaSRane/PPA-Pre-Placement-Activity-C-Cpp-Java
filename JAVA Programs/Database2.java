import java.sql.*;

class Database2
{
    public static void main(String args[]) throws Exception
    {
        String url="jdbc:mysql://localhost:3306/PPA41";
        String username="root";
        String password="";
        String query="insert into Student values(500,'Nikita',99,'Latur')";
        Connection cobj=DriverManager.getConnection(url,username,password);
        System.out.println("Connection done");
        Statement sobj=cobj.createStatement();
        int r1obj=sobj.executeUpdate(query);
        String query1="Select * from Student";
        ResultSet robj=sobj.executeQuery(query1);
        
        while(robj.next())
        {
            int id=robj.getInt("Rid");
            String name=robj.getString("Name");
            int marks=robj.getInt("Marks");
            String city=robj.getString("City");

            System.out.print("Rid : "+id+"\t");
            System.out.print("Name : "+name+"\t");
            System.out.print("Marks : "+marks+"\t");
            System.out.print("City : "+city+"\t");
            System.out.println("");
        }
        robj.close();
        sobj.close();
        cobj.close();

    }
}