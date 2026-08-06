import java.util.Scanner;

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int no)
    {
        this.iSize=no;
        this.Arr=new int[iSize];
    }
    public void Accept()
    {
        System.out.println("Enter the elements");
        Scanner sobj=new Scanner(System.in);
        
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
    }
    public void Display()
    {
        System.out.println("Elements are");
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public int Addition()
    {
        int iSum=0;
        for(int iCnt=0;iCnt<iSize;iCnt++)
        {
            iSum=iSum+Arr[iCnt];
        }
        return iSum;
    }
}

class ArrayOOP
{
    public static void main(String arg[])
    {   
        int iRet=0;
        int size=0;
        System.out.println("Enter the size");
        Scanner sobj=new Scanner(System.in);
        size=sobj.nextInt();
        ArrayX obj1=new ArrayX(size);
        obj1.Accept();
        obj1.Display();
        iRet=obj1.Addition();
        System.out.println("Addition is :"+iRet);

    }
}