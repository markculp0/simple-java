
***

# Build Help

// Binary searches: Iterative and Recursive
g++ -pipe -O2 -std=c++14 binary_search.cpp -lm

// Stress test formulation
g++ -pipe -O2 -std=c++14 stress.cpp -lm

// Run stress test: compare linear search 
// and binary search
g++ -pipe -O2 -std=c++14 binSrchStressTest.cpp -lm

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

---
Sample 2

Input:
4 30 35 40 55
5 40 52 30 66 55

Output:
2 -1 0 -1 3

---
Sample 3

Input:
6 44 999 1200 2020 5500 10000
6 44 5500 1200 666 10000 2020

Output:
0 4 2 -1 5 3

---
Sample 4

Input:
5 10 20000 1500000 100000000 300000000
5 4 1500000 11 300000000 10

Output:
-1 2 -1 4 0
---
Sample 5

Input:        300M      500M      900M
5 1000 2000 300000000 500000000 900000000 
5 300000000 2000 35000000 500000000 1000

Output:
2 1 -1 3 0

---
Sample 5

Input: 
5  999999996 999999997 999999998 999999999 1000000000
5  999999999 999999996 999999997 1000000000 5

Output:
3 0 1 4 -1
    
</pre>


***


