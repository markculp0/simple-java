#include <iostream>
#include <string>

using std::string;

int edit_distance(const string &str1, const string &str2) {
  
  int n = str1.size();
  int m = str2.size();
  
  // edit distance matrix
  int editDistMatrix[n + 1][m + 1];
  
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      
      // 1st row, col increment by 1
      if (i == 0) 
        editDistMatrix[i][j] = j;
      else if (j == 0) 
        editDistMatrix[i][j] = i;
      // if a match, choose diagonal cell
      else if (str1[i - 1] == str2[j - 1]) 
        editDistMatrix[i][j] = editDistMatrix[i - 1][j - 1];
      // if no match, minimum adjacent value + 1
      else {
        // insert / remove
        int minAdjacent = std::min(editDistMatrix[i][j - 1], 
                               editDistMatrix[i - 1][j]);
        // min / replace
        minAdjacent = std::min(minAdjacent, 
                               editDistMatrix[i - 1][j - 1]);
        editDistMatrix[i][j] = 1 + minAdjacent;
      } // end else
      
    } // inner for
  }  // outer for
  
  
  // View matrix
/*  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      std::cout << editDistMatrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
*/

  
  return editDistMatrix[n][m];
} // end edit_distance()

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
