#include <iostream>
#include <vector>

int main() {
  
  int n = 0;
  int m = 0;
  
  std::vector<int> a;
  
  int a1 = rand() % 100000;  // 100K
  int a2 = a1 + (rand() % 1000000);  // 1M
  int a3 = a2 + (rand() % 10000000 );  // 10M
  int a4 = a3 + (rand() % 100000000 );  // 100M
  int a5 = a4 + (rand() % 1000000000);  // 1B
  a.push_back(a1);
  a.push_back(a2);
  a.push_back(a3);
  a.push_back(a4);
  a.push_back(a5);
  
  n = a.size();
  
  // Consistenly return:
  // 2 4 -1 0 1
  std::vector<int> b;
  
  b.push_back(a3);
  b.push_back(a5);
  b.push_back(7);
  b.push_back(a1);
  b.push_back(a2);
  
  m = b.size();

  // print vector a
  for (size_t i = 0; i < a.size(); i++) {
    std::cout << a[i] << " ";
  }
  std::cout << '\n';
  
  return 0; 
}