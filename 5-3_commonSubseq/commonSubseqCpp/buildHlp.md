
***

# Build Help

g++ -pipe -O2 -std=c++14 lcs2.cpp -lm

***

Compute longest common subsequence of two sequences.

Constraints: 
  1 ≤ n, m ≤ 100
  −10^9 < a_i , b_i < 10^9

Input:  
  Line 1: n
  Line 2: a_1 .. a_n
  Line 3: m
  Line 4: b_1 .. b_m

Output: Length of common subsequence p.
  
***

<pre>

Sample 1

Input:
3
2 7 5
2
2 5

Output: 2 
(2,5)
  
---

Sample 2

Input: 
1
7
4
1 2 3 4

Output: 0

---
Sample 3  

Input:
4
2 7 8 3
4
5 2 8 7

Output: 2   
(2,7),(2,8)
  
---

Sample 4 

Input:  
5
500 33 -2000 455 99
5
500 33 -2000 455 99

Output: 5

---

</pre>

***


