// Maximum Pairwise Product : Stress Test

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

// Slow (n^2) naive solution
long long MaxPairwiseProductSlow(const std::vector<int>& numbers) {
  long long max_product = 0;
  int n = numbers.size();
  
  for (int first = 0; first < n; ++first) {
    for (int second = first + 1; second < n; ++second) {
      max_product = std::max(max_product,
                             ((long long)numbers[first]) * numbers[second]);
    }
  }
  
  return max_product;
}

// Fast solution
long long MaxPairwiseProductFast(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();
    
    // Find index of largest number
    int maxIndex1 = -1;
    for (int i = 0; i < n; ++i)  // {
      if ((maxIndex1 == -1) || (numbers[i] > numbers[maxIndex1]))
        maxIndex1 = i;
        
    // Find index of second largest number
    int maxIndex2 = -1;
    for (int j = 0; j < n; ++j)
      if ((j != maxIndex1) && ((maxIndex2 == -1) || (numbers[j] > numbers[maxIndex2])))
        maxIndex2 = j;
    
    // Multiply two largest numbers  
    max_product = ((long long)numbers[maxIndex1] * numbers[maxIndex2]);  
      
    return max_product;
    
} // end MaxPairwiseProduct

int main() {
  
  // Infinite loop for stress test
  while(true) {
    // Rand 2 to 1001 numbers to enter
    int n = rand() % 1000 + 2;
    
    // Rand 2 to 11 numbers to enter
    // int n = rand() % 10 + 2;
    
    // Rand 2 to 5 numbers to enter, easier debug
    // int n = rand() % 4 + 2;
    
    std::cout << n << "\n";
    std::vector<int> a;
    
    // Push back n random numbers, 
    // rand() % 10 = 0 to 9 
    // rand() % 100000 = 0 to 99999
    for (int i = 0; i < n; ++i) {
      a.push_back(rand() % 100000);
    }
    
    // Print out vector of numbers
    for (int i = 0; i < n; ++i) {
      std::cout << a[i] << " ";
    }
    std::cout << "\n";
    
    // Call both versions of function
    long long res1 = MaxPairwiseProductSlow(a);
    long long res2 = MaxPairwiseProductFast(a);
    
    if (res1 != res2) {
      std::cout << "Wrong answer: " << res1 << " " << res2 << "\n";
      break;
    }
    else {
      std::cout << "OK\n";
    }
    
  }  // end while
  
/*    Remove body  
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    // Get result from fn call
    long long result = MaxPairwiseProduct(numbers);
  
    std::cout <<  result << "\n";
 */
 
    return 0;
}
