package mc.hilo;

import java.util.Scanner;

/**
 * HiLo Game
 *
 */
public class App 
{
    public static void main( String[] args )
    {   
        // Create input scanner
        Scanner scan = new Scanner(System.in);
      
        // Create random number to guess
        int theNumber = (int)(Math.random() * 100 + 1);
        int guess = 0;  // Init guess
        
        while (guess != theNumber) {
        
          // Get the user's guess
          System.out.print( "Guess number from 1 to 100: " );
          guess = scan.nextInt();
          
          // Evaluate answer
          if (guess < theNumber)
            System.out.println(guess + " is too low.");
          else if (guess > theNumber)
            System.out.println(guess + " is too high.");
          else
            System.out.println(guess + " is correct.");
        } // end while loop
    } // end main method
} // end App class
