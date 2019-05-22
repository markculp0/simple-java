import java.util.*;
import java.io.*;

public class CarFueling {
	
    static int computeMinRefills(int dist, int tank, int[] stops) {
        int numRefills = 0;
        int curRefill = 0;
        int lastRefill = 0;
        
        // Add begin and end pt
        int n = stops.length + 2;        
        int[] stopsAll = new int[n];
        
        // Add beginning and end to new array
        stopsAll[0] = 0;        
        for (int i = 1; i < n - 1; i++)
        	stopsAll[i] = stops[i - 1];        
        stopsAll[n - 1] = dist;
        
        // debug: stopsAll array
        // for (int i = 0; i < n; i++)
        //	  System.out.print(stopsAll[i] + " ");
        // System.out.println();
        
        
        while (curRefill < n - 1) {
        	lastRefill = curRefill;        	
        	while (curRefill < n - 1 && 
                    ((stopsAll[curRefill + 1] - stopsAll[lastRefill]) <= tank)) {
                curRefill = curRefill + 1;  
            } // inner while
 
        	if (curRefill == lastRefill)
                return -1;
            if (curRefill < n - 1)
                numRefills = numRefills + 1;
        } // outer while
        
        
        
        return numRefills;
    } // end computeMinRefills

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dist = scanner.nextInt();
        int tank = scanner.nextInt();
        int n = scanner.nextInt();
        int stops[] = new int[n];
        for (int i = 0; i < n; i++) {
            stops[i] = scanner.nextInt();
        }

        System.out.println(computeMinRefills(dist, tank, stops));
        scanner.close();
    }
}
