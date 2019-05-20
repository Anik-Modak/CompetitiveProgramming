import java.math.BigInteger;
import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int cas = 1;

        while(t-->0)
        {
            int n = in.nextInt();

            BigInteger result = in.nextBigInteger();
            for(int i = 1; i<n; i++)
            {
                int a = in.nextInt();
                result = lcm(result, BigInteger.valueOf(a));
            }

            System.out.println("Case " + cas +": " +result);
            System.gc();
            ++cas;

        }

    }
    public static BigInteger lcm(BigInteger a, BigInteger b)
    {
        return a.multiply(b.divide(a.gcd(b)));
    }

}
