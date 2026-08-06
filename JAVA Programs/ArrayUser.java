import java.util.Scanner;

class ArrayUser
{
    public static void main(String arg[])
    {
        int iSize;
        int iCnt=0;
        int iSum=0;

        System.out.println("Enter the number of size");
        Scanner sobj=new Scanner(System.in);
        iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Number of elements in the arrays are:"+Arr.length);

        System.out.println("Enter the elements of array:");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Eelements of array are");
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            iSum=iSum+Arr[iCnt];
        }
        System.out.println("Sum of elements is:"+iSum);


    }
}