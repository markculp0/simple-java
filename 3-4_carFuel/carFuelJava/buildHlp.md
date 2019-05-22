
***

# Build Help

javac -encoding UTF-8 CarFueling.java

java -Xmx1024m CarFueling

***

Constraints: 
    1 ≤ d ≤ 10^5  
    1 ≤ m ≤ 400
    1 ≤ n ≤ 300
    0 < stop 1 < stop 2 ··· < stop n < d

Input:  
  * d - distance to final destination (int)
  * m - max distance on full tank (int)
  * n - number of refill stations (int)
  * stops - miles to each refill stop (vector<int>)

Output: minimum number of refills (int)

***

<pre>
Case 1
Input: d, m, n, stops
950   
400
4
200 375 550 750

Output: min # of refills
2

---
Case 2
Input:  d, m, n, stops
10
3
4
1 2 5 9

Output: min # of refills
-1
impossible to get there, next stop too far away

---
Case 3
Input:  d, m, n, stops
200
250
2
100 150

Output:
0
no refills required

</pre>

***


