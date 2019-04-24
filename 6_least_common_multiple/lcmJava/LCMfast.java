import java.util.*;

public class LCMfast {
  // Greatest Common Divisor
  private static long gcd_fast(int a, int b) {
    if (b == 0)
      return a;
  
    return (long) gcd_fast(b, a % b);
  }
  
  // Least common multiple
  private static long lcm_fast(int a, int b) {
    if ((a == 0) || (b == 0))
      return (long) (a * b);
    else
      return (long) (((long)a*b) / ((long)gcd_fast(a, b)));  
  } // end lcm_fast
  
/*  
  private static long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long) a * b; ++l)
      if (l % a == 0 && l % b == 0)
        return l;

    return (long) a * b;
  }
*/  

  public static void main(String args[]) {
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    System.out.println(lcm_fast(a, b));
  }
}
