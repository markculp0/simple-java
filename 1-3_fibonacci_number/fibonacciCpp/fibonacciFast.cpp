
#include <iostream>
#include <cassert>
#include <vector>

/*
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
*/

int fibonacci_fast(int n) {
    // write your code here
    long long result = -1;
    std::vector<long long> fibnum(n + 1);
  
    for (int i = 0; i <= n; ++i) {
      if (i == 0)
        fibnum[i] = 0;
      else if (i == 1)
        fibnum[i] = 1;
      else {
        fibnum[i] = fibnum[i - 1] + fibnum[i - 2];
      } // end else
      
    } // end for
    
    result = fibnum[n];  
    
    return result;
}

/*
void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}
*/

int main() {
    int n = 0;
    std::cin >> n;
    //test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}

