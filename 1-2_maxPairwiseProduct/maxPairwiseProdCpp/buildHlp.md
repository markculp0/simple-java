
***

# Build Help

***

g++ -pipe -O2 -std=c++14 mppSlow.cpp -lm -o mppSlow

g++ -pipe -O2 -std=c++14 mppFast.cpp -lm -o mppFast

***

# Pass vector of 100K zeros to fast solution
g++ -pipe -O2 -std=c++14 speedTest.cpp -lm -o speedTest

***

# Compare results of fast and slow solutions
g++ -pipe -O2 -std=c++14 stressTest.cpp -lm -o stressTest

***

# R help
formatC(num, format='e', digits = 2)

***




