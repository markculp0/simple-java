
***

# Build Help

g++ -pipe -O2 -std=c++14 majority_element.cpp -lm

***

Check whether an input sequence contains a majority element.

Constraints: 
  1 ≤ n ≤ 10^5
  0 ≤ i ≤ 10^9

Input:  
  First line: An integer n.
  Second line: A sequence of n non-negative integers.

Output: 
  1 : if item appears > n/2 times.
  0 : if not.
  
***

<pre>
Sample 1
Input:
5
23922

Output:
1

---
Sample 2
Input: 
4
1234

Output: 
0

---
Sample 3
Input: 
4
1231

Output:
0

</pre>

***


