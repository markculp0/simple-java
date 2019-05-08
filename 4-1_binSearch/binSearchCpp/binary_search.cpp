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

long long binSrchIt(const vector<long long> &a, int l, int r, long long x) {
  long long mid;
  
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
long long binary_search(const vector<long long> &a, long long x) {
  int left = 0, right = (int)a.size(); 
  long long result = 0;
  
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
  int n;
  
  
  std::cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<long long> b(m);
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
