abstract class Arithmetic {
    public int addition(int no1, int no2) {
        return no1 + no2;
    }

    public abstract int subtraction(int no1, int no2);

    public abstract int multiplication(int no1, int no2);
}

abstract class Marvellous extends Arithmetic {
    public abstract int multiplication(int no1, int no2);

    public int subtraction(int no1, int no2) {
        return no1 - no2;
    }
}

class Infosystem extends Marvellous {
    public int multiplication(int no1, int no2) {
        return no1 * no2;
    }
}

class AbstractDemo2 
{
    public static void main(String args[]) {
        Infosystem mobj = new Infosystem();
        int ret = 0;
        ret = mobj.addition(11, 21);
        System.out.println("Addition is " + ret);
        ret = mobj.subtraction(11, 21);
        System.out.println("Subtraction is " + ret);
        ret = mobj.multiplication(11, 21);
        System.out.println("Multiplication is " + ret);
    }
}
