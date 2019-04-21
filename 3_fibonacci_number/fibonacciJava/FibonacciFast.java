import java.util.Scanner;
import java.util.ArrayList;
// import java.math.BigInteger;

public class FibonacciFast {
  private static long calc_fib(int n) {
    long result = -1;
    ArrayList<Long> fibnum=new ArrayList<Long>(n + 1);
    
    for (int i = 0; i <= n; ++i) {
      if (i == 0)
        fibnum.add((long)0);
      else if (i == 1)
        fibnum.add((long)1);
      else 
        fibnum.add(fibnum.get(i - 1) + fibnum.get(i - 2));
    } // end for
    
    result = fibnum.get(n);
    
    return result;
  } // end calc_fib

  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();

    System.out.println(calc_fib(n));
  }
}