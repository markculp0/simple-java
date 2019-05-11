
***

# Build Help

g++ -pipe -O2 -std=c++14 edit_distance.cpp -lm

***

Compute the edit distance between two strings.

Constraints: Length of both strings between 1 and 100.

Input:  Two lines containing strings with lower case latin letters.

Output: Minimum number of coins with denominations 1, 3, 4 that changes money.
  
***

<pre>

Sample 1

Input:
  ab
  ab

Output: 0

|a|b|
|a|b|

---

Sample 2

Input: 
  short
  ports

Output: 3

|s|h|o|r|t|-|
|-|p|o|r|t|s|

---
Sample 3  

Input:  
  editing
  distance

Output: 5
|e|d|i|-|t|i|n|g|-|
|-|d|i|s|t|a|n|c|e|

---

Sample 4 

Input:  
  horticultureblobfrenzycookiestuffer
  hortcultureblobbfrenzycookstuffer

Output: 4

|h|o|r|t|i|c|u|l|..|o|b|-|f|r|e|..|o|k|i|e|s|t|u|f|..
|h|o|r|t|-|c|u|l|..|o|b|b|f|r|e|..|o|k|-|-|s|t|u|f|..

---

Sample 5

Input:  
  abc
  def
  
Output: 3

---

</pre>

***


