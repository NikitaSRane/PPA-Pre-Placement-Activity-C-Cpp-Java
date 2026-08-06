import java.sql.*;

class Database3
{
    public static void main(String args[]) throws Exception
    {
        String url="jdbc:mysql://localhost:3306/PPA41";
        String username="root";
        String password="";
        String query="create table Patient(Did int, Dname varchar(255))";
        Connection cobj=DriverManager.getConnection(url,username,password);
        System.out.println("Connection done");
        Statement sobj=cobj.createStatement();
        boolean r1obj=sobj.execute(query);
        String query1="describe Patient";
        ResultSet robj=sobj.executeQuery(query1);
        
        while(robj.next())
        {
            String type=robj.getString("Type");
            String name=robj.getString("Field");
            //int marks=robj.getInt("Marks");
            //String city=robj.getString("City");

            
            System.out.print("Field : "+name+"\t");
            System.out.print("Type : "+type+"\t");
            //System.out.print("Marks : "+marks+"\t");
            //System.out.print("City : "+city+"\t");
            System.out.println("");
        }
        robj.close();
        sobj.close();
        cobj.close();

    }
}