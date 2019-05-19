***

# Build Help 

***

#### Money Change

javac -encoding UTF-8 FractionalKnapsack.java

java -Xmx1024m FractionalKnapsack

***


Constraints: 1 ≤ m ≤ 10^3 

Input:  The number n of items and the capacity W of a knapsack.

Output: The maximal value of fractions of items that fit into the knapsack.

***

**out = in**

<pre>

-----------------------------------------
Input:            |   Input:
3 50              |   1 10
60 20             |   500 30  (val, wt)
100 50            |
120 30            |
                  |
Output:           |   Output:
180.0000          |   166.6667
(1st & 3rd item)  |   (1/3 of avail item)
-----------------------------------------
Input:                    | Input:
2 10        2 10          | 1 10 
                          |
10 5        10 5          | 500 30
10 5        15 5          |

Output (w debug state):   | Output:

v  w  wv    v   w   wv    |
10 5 = 2    10  5  = 2    | 500 30 /= 16.66667
10 5 = 2    15  5  = 3    |

20          25            | 166.6667
-----------------------------------------

</pre>

***



