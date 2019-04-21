
#include <iostream>

// Greatest Common Divisor
long long gcd_fast(int a, int b) {
  
  if (b == 0)
    return a;
  
  return (long long) gcd_fast(b, a % b); 
}

// Least common multiple
long long lcm_fast(int a, int b) {
  
  if ((a == 0) || (b == 0))
    return (long long) (a * b);
  else
    return (long long) (((long long)a*b) / ((long long)gcd_fast(a, b)));
  
}

int main() {
  int a, b;
  std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
