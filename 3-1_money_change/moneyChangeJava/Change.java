import java.util.Scanner;

public class Change {
    private static int getChange(int m) {
          int n = 0;
  
          n = m / 10;
          m = m % 10;
          n = n + (m / 5);
          n = n + (m % 5);
        
          return n;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        System.out.println(getChange(m));

    }
}

