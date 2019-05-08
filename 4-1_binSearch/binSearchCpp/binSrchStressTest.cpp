

#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>

using std::vector;

// Recursive binary search
int binSrch(const vector<int> &a, int l, int r, int x) {
  int mid; 
  
  // Return -1 if not present
  if (r < l) {
      return -1;
  }
  
  // Find mid-point
  mid = l + (r - l) / 2;

  // Recursive calls
  if (x == a[mid])
    return mid;
  else if (x < a[mid])
    return binSrch(a, l, mid - 1, x);
  else
    return binSrch(a, mid + 1, r, x);
  
  return -1;
  
}  // end binSrch

int binSrchIt(const vector<int> &a, int l, int r, int x) {
  int mid;
  
  while (l <= r) {
    // mid = l + (r - l) / 2;
    mid = l + ((r - l) / 2);
    
    if (x == a[mid])
      return mid;
    else if (x < a[mid])
      r = mid - 1;
    else 
      l = mid + 1;
  }
  
  return -1;
  
}

// Call binary search function
int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  int result = 0;
  
  result = binSrchIt(a, left, right, x);
  
  return result;
}  // end binary_search



// Linear search
int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  
  while(true) {
  
  int n;
  int m;
  
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
  
  std::vector<int> b;
  b.push_back(a3);
  b.push_back(a5);
  b.push_back(7);
  b.push_back(a1);
  b.push_back(a2);
  m = b.size();
  
  /*
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  */
  
  for (int i = 0; i < m; ++i) {
    
    // Binary search
    // std::cout << binary_search(a, b[i]) << ' ';
    int res1 = binary_search(a, b[i]);
    
    // Linear search
    // std::cout << linear_search(a, b[i]) << ' ';
    int res2 = linear_search(a, b[i]);
    
    if (res1 != res2) {
      std::cout << "Wrong answer: " << res1 << " " << res2 << "\n";

      // Print vector a
      for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
      }
      std::cout << '\n';
      
      break;
    }
    else {
      std::cout << "OK\n";
    }
  }
  std::cout << '\n';
  
  } // end while
  
} // end main
