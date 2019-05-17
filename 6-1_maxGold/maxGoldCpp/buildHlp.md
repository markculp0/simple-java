
***

# Build Help

g++ -pipe -O2 -std=c++14 knapsack.cpp -lm

g++ -pipe -O2 -std=c++14 knapsack2.cpp -lm

g++ -pipe -O2 -std=c++14 knapsack3.cpp -lm

g++ -pipe -O2 -std=c++14 ks2.cpp -lm

g++ -pipe -O2 -std=c++14 knapTest.cpp -lm

g++ -pipe -O2 -std=c++14 knapTest.cpp -lm -g

***

Given n gold bars, find the maximum weight of gold that fits into a bag of capacity W.

Constraints: 
  1 ≤ W ≤ 10^4
  1 ≤ n ≤ 300
  0 ≤ w_0 , .., w_n−1 ≤ 10^5

Input: 
  Line 1: W n (Capacity of a knapsack, W; number of gold bars, n.)
  Line 2: Max weight fits (Maximum weight of gold that fits into a knapsack of capacity W.)

Output: Maximum weight of gold that fits into a knapsack of capacity W.
  
***

<pre>

Sample 1

Input:
10 3
1 4 8

Output: 
9
  
---

Sample 2

Input: 
10 4
6 3 4 2

Output: 
10

---
Sample 3  

Input:
20 4
25 3 5 8

Output: 
16
  
---

Sample 4 

Input:  
100 5
5 30 35 40 10

Output: 
90

---

Failed case #2/14: (Wrong answer) 
Input: 
20 4 
5 7 12 18 

Your output: 30 
Correct output: 19

---

Sample 6 

Input:  
100000 5
5000 30000 35000 40000 10000

Output:
90000

---

Sample 7

Input:  
10000 5
5000 30000 35000 40000 10000

Output:
10000

---

Sample 8

Input:  
10000 20
5000 300000 35000 400000 100000 5000 300000 35000 400000 100000 5000 300000 35000 400000 100000 5000 300000 35000 400000 100000

Output:
10000

---
Input
9384 287

core dump

---

n: 191 W: 5645



same

--

Failed case #1/14: (Wrong answer) 
Input: 
10 3 
1 4 8 
Your output: 214748368 
Correct output: 9

---

n: 287 W: 9384
dump

</pre>

***


