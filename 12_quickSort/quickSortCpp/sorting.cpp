#include <iostream>
#include <vector>
#include <cstdlib>

using std::vector;
using std::swap;

int min(int a, int b){
  if(a > b) 
    return b;
  return a;
}

int partition2(vector<int> &a, int l, int r) {
  int x = a[l];
  int j = l;
  for (int i = l + 1; i <= r; i++) {
    if (a[i] <= x) {
      j++;
      swap(a[i], a[j]);
    }
  }
  swap(a[l], a[j]);
  return j;
}

void partition3(vector<int> &a, int l, int r, int &m1, int &m2) {
  int v = a[r];   // pivot is right most element
  int p = l;      // p starts at lower bound
  int itr = l;    // iterator
  int q = r;      // q starts at upper bound
  
  while (itr < q) {   
    if (a[itr] < v) {       // swap p w items < v
      swap(a[itr], a[p]);
      itr++;
      p++;
    }
    else if (a[itr] == v){    // swap q item = v
      q--;
      swap(a[itr], a[q]);
    }
    else {                // a[itr] > v, increment
      itr++;
    }
  } // end while
  
  // Move 
  int least = min(q - p, r - q + 1);
  for(int i=0; i< least; i++){
    swap(a[(p + i)], a[(r - least + 1 + i)]); 
  }
  
  m2 = p - 1;
  m1 = r - q + p;
  
}


void randomized_quick_sort(vector<int> &a, int l, int r) {
  if (l >= r) {
    return;
  }
  
  /*
  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  
  // Two way partition
  int m = partition2(a, l, r);
  randomized_quick_sort(a, l, m - 1);
  randomized_quick_sort(a, m + 1, r);
  */
  
  int m1, m2;
  
  // Three way partition
  partition3(a, l, r, m1, m2);
  
  randomized_quick_sort(a, l, m2);
  randomized_quick_sort(a, m1, r);
  
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
