
import java.util.*;
import java.io.*;

public class MaxPairwiseProductFast {
    static long getMaxPairwiseProduct(int[] numbers) {
      long max_product = 0;
      int n = numbers.length;
      
      // Find index of largest number
      int maxIndex1 = -1;
      for (int i = 0; i < n; ++i)  // {
        if ((maxIndex1 == -1) || (numbers[i] > numbers[maxIndex1]))
          maxIndex1 = i;
          
      // Find index of second largest number
      int maxIndex2 = -1;
        for (int j = 0; j < n; ++j)
          if ((j != maxIndex1) && ((maxIndex2 == -1) || (numbers[j] > numbers[maxIndex2])))
            maxIndex2 = j;
      
      // Multiply two largest numbers  
      max_product = (numbers[maxIndex1] * numbers[maxIndex2]);        
      
      return max_product;  
    } // end getMaxPairwiseProduct()
    
/*  
    static int getMaxPairwiseProduct(int[] numbers) {
        int max_product = 0;
        int n = numbers.length;

        for (int first = 0; first < n; ++first) {
            for (int second = first + 1; second < n; ++second) {
                max_product = max(max_product,
                    numbers[first] * numbers[second])
            }
        }

        return max_product;
    }
*/

    public static void main(String[] args) {
        FastScanner scanner = new FastScanner(System.in);
        int n = scanner.nextInt();
        int[] numbers = new int[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();
        }
        System.out.println(getMaxPairwiseProduct(numbers));
    }

    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        FastScanner(InputStream stream) {
            try {
                br = new BufferedReader(new
                    InputStreamReader(stream));
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        String next() {
            while (st == null || !st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
    }

}