
***

# Build Help

g++ -pipe -O2 -std=c++14 binary_search.cpp -lm

***

Implement the binary search algorithm.

Constraints: 
  1 ≤ n, k ≤ 10^4
  1 ≤ i ≤ 10^9

Input:  
  Line 1: An integer n and a sequence of n pairwise distinct positive integers in increasing order.
  Line2: An integer k and k positive integers.

Output: For all i from 0 to k − 1, output an index
     −1 : if no such number k exists in first sequence.
  index : if number k exists in first sequence.
  (0..n) 
  
***

<pre>
Sample 1

Input:
5 1 5 8 12 13
5 8 1 23 1 11

Output:
2 0 -1 0 -1

</pre>

***


