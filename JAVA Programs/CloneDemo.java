class Employee implements Cloneable
{
    public int eId;
    public String name;
    public int salary;
    
    public Employee(int no,String str,int value)
    {
        this.eId=no;
        this.name=str;
        this.salary=value;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class CloneDemo
{
    public static void main(String args[])
    {
        try
        {
            Employee eobj1=new Employee(101,"Nikita",50000);
        
            System.out.println("Employee no of first employee"+eobj1.eId);
            System.out.println("Name of first Employee"+eobj1.name);
            System.out.println("Salary of first employee"+eobj1.salary);

            Employee eobj2=(Employee)eobj1.clone();
            System.out.println("Employee no of second employee"+eobj2.eId);
            System.out.println("Name of second Employee"+eobj2.name);
            System.out.println("Salary of second employee"+eobj2.salary);

            eobj1.name="Sagar";
            System.out.println("Name of first Employee"+eobj1.name);
            System.out.println("Name of second Employee"+eobj2.name);
        }
        catch(CloneNotSupportedException obj)
        {
            System.out.println(obj);
        }
        
    }
}