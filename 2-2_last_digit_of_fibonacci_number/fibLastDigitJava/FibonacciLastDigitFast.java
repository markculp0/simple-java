
import java.util.*;

public class FibonacciLastDigitFast {
    private static int getFibonacciLastDigitFast(int n) {
        int result = -1;
        ArrayList<Integer> fibnum = new ArrayList<Integer>(n + 1);
        
        for (int i = 0; i <= n; ++i) {
          if (i == 0)
            fibnum.add(0);
          else if (i == 1)
            fibnum.add(1);
          else
            fibnum.add((fibnum.get(i - 1) + fibnum.get(i - 2)) % 10 );
        }
        
        result = fibnum.get(n);

        return result;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int c = getFibonacciLastDigitFast(n);
        System.out.println(c);
    }
}

