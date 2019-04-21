
#include <iostream>

// Recursive algorithm
int gcd_fast(int a, int b) {
  
  if (b == 0)
    return a;
 
  return gcd_fast(b, a % b); 
}

// Calling function
int gcd_call_fast(int a, int b) {
  if ((a == 0) || (b == 0))
    return 1;
  else
    return gcd_fast(a, b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_call_fast(a, b) << std::endl;
  return 0;
}
