#include <iostream>
#include <vector>

using std::vector;

int lcs2(vector<int> &a, vector<int> &b) {
  
  int n = a.size();
  int m = b.size();
  
  int lcsMatrix[n + 1][m + 1];
  
  for (int i = 0; i <= n; i++) { 
    for (int j = 0; j <= m; j++) { 
      
      // 1st row, col all 0's
      if (i == 0 || j == 0) 
        lcsMatrix[i][j] = 0;
      // if match, diag + 1
      else if (a[i - 1] == b[j - 1]) 
        lcsMatrix[i][j] = lcsMatrix[i - 1][j - 1] + 1;
      // if no match, get horiz or vertical ancestor
      else
        lcsMatrix[i][j] = std::max(lcsMatrix[i - 1][j], lcsMatrix[i][j - 1]);
      
    } // inner for
  } // outer for
  
  // View matrix
/*  for (int i = 0; i <= n; i++) { 
    for (int j = 0; j <= m; j++) { 
      std::cout << lcsMatrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
*/

  
  //return std::min(std::min(a.size(), b.size()), c.size());
  return lcsMatrix[n][m];
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  size_t m;
  std::cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}
