#include <iostream>

int get_change(int m) {
  int n = 0;
  
  n = m / 10;
  m = m % 10;
  n = n + (m / 5);
  n = n + (m % 5);
  
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
