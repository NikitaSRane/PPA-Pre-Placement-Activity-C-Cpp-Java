import java.util.*;

class Collections7
{
    public static void main(String args[])
    {
        Stack<Character> sobj=new Stack<Character>();

        sobj.push('A');
        sobj.push('B');
        sobj.push('C');
        sobj.push('D');
        sobj.push('E');

        System.out.println("Elements of stack:" +sobj);

        System.out.println("Popped element is:" +sobj.pop());
        System.out.println("Elements of stack:" +sobj);


    }
}