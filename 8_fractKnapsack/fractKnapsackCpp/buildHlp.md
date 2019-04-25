
***

# Build Help

g++ -pipe -O2 -std=c++14 fractional_knapsack.cpp -lm

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
60 20             |   500 30
100 50            |
120 30            |
                  |
Output:           |   Output:
180.0000          |   166.6667
(1st & 3rd item)  |   (1/3 of avail item)
-----------------------------------------

</pre>

***


