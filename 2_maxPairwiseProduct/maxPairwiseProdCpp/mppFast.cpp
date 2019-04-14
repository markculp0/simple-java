// Maximum Pairwise Product : Fast

#include <iostream>
#include <vector>

long long MaxPairwiseProduct(const std::vector<int>& numbers) {
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
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    
    // Get result from fn call
    long long result = MaxPairwiseProduct(numbers);
  
    std::cout <<  result << "\n";
    return 0;
}
