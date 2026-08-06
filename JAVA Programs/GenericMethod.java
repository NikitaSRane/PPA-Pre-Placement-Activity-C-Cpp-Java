class GenericMethod
{
    static <T> void Display(T[] Arr)
    {  
    
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
            
    }
    public static void main(String args[])
    {

        Integer[] iArr={10,20,30,40};
        Display(iArr);

        Character[] cArr={'A','B','C'};
        Display(cArr);

    }
}