#include <iostream>

int get_change(int m) {
  // init vars
  int n = 3;
  int coin[n] = {1,3,4};  
  
  // Money value + 1 
  int minCoins[m + 1];
  
  // Base case
  minCoins[0] = 0;
  
  // Init table values
  for (int i = 1; i <= m; i++) 
    minCoins[i] = 1000;
  
  // Iter money vals
  for (int i = 1; i <= m; i++){
    // Iter coin denoms
    for (int j = 0; j < n; j++) {
      if (coin[j] <= i){
        int res1 = minCoins[i - coin[j]];
        if (res1 != 1000 && (res1 + 1) < minCoins[i])
          minCoins[i] = res1 + 1;
      } // end if
    } // inner for
  } // outer for
  
  // View money, coins
  for (int i = 1; i <= m; i++){
    std::cout << minCoins[i] << " ";
  }
  std::cout << std::endl;
   
  return minCoins[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
