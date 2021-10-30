import java.util.Scanner;
class Telefon{
    private String nume;
    private String apeluri = new String[100];
    private int k=0;
    public Telefon( String n)
    {
        nume=n;
    }
    public boolean apeleaza( Telefon t)
    {
        if(t.k<100)
        {
            t.apeluri[k]=this.nume;
            t.k++;
            return true;
        }
        return false;
    }
    public int numarDeApeluri(String n)
    {
        int count;
        for(int i=0;i<=k;i++)
        {
            if(apeluri[i].equals(n))
                count++;
        }
        return Integer.valueOf(count);
    }
    public String toString()
    {
        String a=nume+"->";
        for(int i=0;i<=k;i++)
            a=a+" " + apeluri[i];
        return a;
    }

}

public class TelefonClient{

    public static void main(String[] args) {
        Scanner scan= new Scanner(System.in);
        int nr = scan.nextInt()
        System.out.println(nr);
    }
}   