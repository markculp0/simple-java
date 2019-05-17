
#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
  
  int n = w.size();
  //int matrix[n+1][W+1]; 
  
  // Dynamic matrix row on heap 
  int **matrix = new int*[n+1];
  
  // Dynamic matrix column on heap
  for(int i = 0; i < (n+1); i++)
  {
    matrix[i] = new int[W+1];
  }
  
  // Populate matrix
  for (size_t i = 0; i <= n; i++)  {   // gold items
    for (size_t j = 0; j <= W; j++) {   // knapsack weight
      if (i == 0 || j == 0) 
        matrix[i][j] = 0;
      else if (w[i-1] <= j)  // 
        matrix[i][j] = std::max(w[i-1] + matrix[i-1][j-w[i-1]], 
                                matrix[i-1][j]); 
      else
        matrix[i][j] = matrix[i-1][j]; 
    } // end inner for
  } // end outer for
  
  // Set optimal knapsack weight
  int current_weight = matrix[n][W];
  
  // Reclaim memory
  for(int i = 0; i < (n+1); i++)
  {
    delete[] matrix[i];
  }
  
  // Delete matrix
  delete[] matrix;
  
  // Set optimal knapsack weight
  return current_weight;
}


int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}

