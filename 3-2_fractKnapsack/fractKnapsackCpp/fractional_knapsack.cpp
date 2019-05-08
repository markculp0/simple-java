#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

// using std::vector;
using namespace std;


// Input: capacity - total weight knapsack holds
// Input: values - value of each item
// Input: weights - weight of each item
// Output: value - max value of items that fit in knapsack
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int num_items = weights.size();
  vector< pair <double, int> > mypair(num_items);
  
  // Calc weight value and store in pair vector
  for (int i = 0; i < num_items; ++i) {
    mypair[i].first = (double)values[i] / (double)weights[i];
    mypair[i].second = weights[i];
  }  
  
  // Sort pairs in desc order by value
  std::sort(mypair.begin(), mypair.end());
  
  // Accumulate values for available capacity
  for (int i = num_items - 1; i > -1; --i) {
    if (mypair[i].second <= capacity) {
      value = value + (mypair[i].first * mypair[i].second);
      capacity = capacity - mypair[i].second;
      if (capacity < 0)
        capacity = 0;
    } else {
      value = value + (mypair[i].first * capacity);
      capacity = 0;
    }
  }
  
/* 
  // Debug  state: view inputs desc sort by value 
  for (int i = num_items - 1; i > -1; --i) {
    std::cout << fixed << setprecision(4) 
        << mypair[i].first << " " 
        << mypair[i].second << "\n";
  } 
*/ 


  return value;
}


int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  //std::cout.precision(4);
  std::cout << fixed << setprecision(4) 
      << optimal_value << std::endl;
  return 0;
}
