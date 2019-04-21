
#include <iostream>
#include <vector>

// Get last digit of Fibonacci Number
int get_fibonacci_last_digit_fast(int n) {
    long long result = -1;
    std::vector<long long> fibnum(n + 1);
    
    for (int i = 0; i <= n; ++i) {
      if (i == 0)
        fibnum[i] = 0;
      else if (i == 1)
        fibnum[i] = 1;
      else {
        fibnum[i] = (fibnum[i - 1] + fibnum[i - 2]) % 10;
      } // end else
    } // end for
    
    result = fibnum[n];  
    
    return result;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
}
