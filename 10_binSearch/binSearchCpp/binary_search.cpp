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
  mid = (r - l) / 2 + l;

  // Recursive calls
  if (x == a[mid])
    return mid;
  else if (x < a[mid])
    return binSrch(a, l, mid - 1, x);
  else
    return binSrch(a, mid + 1, r, x);
  
}  // end binSrch

// Call binary search function
int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  int result = 0;
  
  
  result = binSrch(a, left, right, x);
  
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
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    
    // Binary search
    std::cout << binary_search(a, b[i]) << ' ';
    
    // Linear search
    // std::cout << linear_search(a, b[i]) << ' ';
  }
  std::cout << '\n';
}
