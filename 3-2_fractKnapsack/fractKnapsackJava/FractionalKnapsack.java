import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import javafx.util.Pair;

public class FractionalKnapsack {
  
    private static double getOptimalValue(int capacity, int[] values, int[] weights) {
        double value = 0;
        int num_items = values.length;
        ArrayList <Pair <Double, Integer> > mypair = 
                  new ArrayList <Pair <Double, Integer> > ();
                  
        // Calc weight value and store in pair vector          
        for (int i = 0; i < num_items; ++i) {
          mypair.add(new Pair <Double, Integer>((double)values[i]/weights[i], weights[i]));
        }
        
        // Sort pairs in desc order by value
        mypair.sort(new Comparator<Pair<Double, Integer>>() {
          @Override
          public int compare(Pair<Double, Integer> o1, Pair<Double, Integer> o2) {
            if (o1.getKey() > o2.getKey()) {
                return -1;
            } else if (o1.getKey().equals(o2.getKey())) {
                return 0; 
                          
            } else {
                return 1;
            }
          }
        });
        
        // Accumulate values for available capacity
        for (int i = 0; i < num_items; ++i) {
          if (mypair.get(i).getValue() <= capacity) {
            value = value + (mypair.get(i).getKey() * mypair.get(i).getValue());
            capacity = capacity - mypair.get(i).getValue();
            if (capacity < 0)
              capacity = 0;
          } else {
            value = value + (mypair.get(i).getKey() * capacity);
            capacity = 0;
          }
        }
        
        /*
        // debug: print values and weights
        for (int i = 0; i < num_items; ++i) {
          System.out.println(mypair.get(i).getKey());
        }
        */
        
        return value;
    }

    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int capacity = scanner.nextInt();
        int[] values = new int[n];
        int[] weights = new int[n];
        for (int i = 0; i < n; i++) {
            values[i] = scanner.nextInt();
            weights[i] = scanner.nextInt();
        }
        System.out.println(getOptimalValue(capacity, values, weights));
    }
} 
