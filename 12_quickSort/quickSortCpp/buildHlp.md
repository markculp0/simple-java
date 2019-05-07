
***

# Build Help

g++ -pipe -O2 -std=c++14 sorting.cpp -lm

g++ -pipe -O2 -std=c++14 qs3.cpp -lm

***

Replace a 2-way partition quick sort algo with a 3-way partition quick sort algo.

Constraints: 
  1 ≤ n ≤ 10^5
  0 ≤ i ≤ 10^9

Input:  
  First line: An integer n.
  Second line: A sequence of n integers.

Output: 
  A sequence sorted in non-decreasing order.
  
***

<pre>
Sample 1
Input:
5
2 3 9 2 2

Output:
2 2 2 3 9

---
Sample 2
Input:
5
4 1 2 3 5


Output:

1 2 3 4 5
---
Sample 3  // fails at 6 alike or more
Input:
10 
1 1 1 1 1 1 1 1 1 1

Output:
1 1 1 1 1 1 1 1 1 1

---

</pre>

***


