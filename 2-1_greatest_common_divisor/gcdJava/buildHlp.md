***

# Build Help 

***

#### GCD Slow

javac -encoding UTF-8 GCDslow.java

java -Xmx1024m GCDslow

***

#### GCD Fast

javac -encoding UTF-8 GCDfast.java

java -Xmx1024m GCDfast

***

The greatest common divisor (gcd) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers.

1 ≤ a, b ≤ (2 · 10^9) or 2e+09

**out = in**
4 = 8 12      17657 = 28851538 1183019        2 = 2000000000 2
4 = 12 8      17657 = 1183019 28851538        2 = 2 2000000000
6 = 54 24     1 = 2000000000 0                25000 = 100000 25000
1 = 18 31     1 = 0 2000000000                25000 = 25000 100000 
1 = 0 5       200M = 2000000000 1800000000
1 = 9 0       200M = 1800000000 2000000000

***



