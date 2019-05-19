#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <climits>

using std::vector;
using std::string;
using std::max;
using std::min;

// Evaluate arithmetic expressions
signed long long eval(long long a, long long b, char op) {
  if (op == '*') {
    return a * b;
  } else if (op == '+') {
    return a + b;
  } else if (op == '-') {
    return a - b;
  } else {
    assert(0);
  }
}  // end eval() 

// Base function to obtain max fn value
signed long long get_maximum_value(const string &exp) {

  vector<int> num; 
  vector<char> op;
  string numBuf = ""; 
  
  // Parse digits and symbols
  for (int i = 0; i < exp.length(); i++) {
    if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*')
      op.push_back(exp[i]);
    else {
      numBuf = exp[i];
      int cnum = atoi(numBuf.c_str()); 
      num.push_back(cnum);
      numBuf = "";
    } // end else
  } // end for
  
  // Input counts
  int opCnt = op.size();
  int numCnt = opCnt + 1;
  
  // Create matrix to hold max and min values
  signed long long maxMatrix[numCnt][numCnt];
  signed long long minMatrix[numCnt][numCnt];
  
  // Fill diagonal array in matrices.
  // Top left to bottom right.
  for (int i = 0; i < numCnt; i++) {
    for (int j = 0; j < numCnt; j++) {
      // Init values
      maxMatrix[i][j] = 0;
      minMatrix[i][j] = 0;
      
      // Fill diag with original 
      // number values
      if (i == j) {
        maxMatrix[i][j] = num[i];
        minMatrix[i][j] = num[i];
      }
    } //end inner for
  } // end outer for
  
  // Fill decreasing diagonal
  // values up to top right value
  for (int s = 1; s <= numCnt - 1; s++){
    for (int i = 0; i < numCnt - s; i++) {
      int j = i + s;
      signed long long maxBuf = LLONG_MIN;
      signed long long minBuf = LLONG_MAX;
      
      for (int k = i; k < j; k++) {
        long long a = eval(maxMatrix[i][k], maxMatrix[k + 1][j], op[k]);
        long long b = eval(maxMatrix[i][k], minMatrix[k + 1][j], op[k]);
        long long c = eval(minMatrix[i][k], maxMatrix[k + 1][j], op[k]);
        long long d = eval(minMatrix[i][k], minMatrix[k + 1][j], op[k]);
        
        minBuf = min(minBuf,min(d,min(c,min(a,b))));
        maxBuf = max(maxBuf,max(d,max(c,max(a,b))));
        
        // debug: symbols
        // std::cout << i << " " << k << " | ";
        // std::cout << op[k] << " | ";
        
        // Fill remaining min & max values
        minMatrix[i][j] = minBuf;
        maxMatrix[i][j] = maxBuf;
      } // 2nd inner for
      
      // debug: matrices cell indices
       // std::cout << maxMatrix[i][j] << " ";
       // std::cout << i << " " << j << " | ";
    } // inner for
    // debug: matrices cell indices
    // std::cout << "\n";
  } // outer for
  
  /*
  //debug: show number & symbol count
  std::cout << "numCnt: " << numCnt << "\n";
  std::cout << "opCnt: " << opCnt << "\n";
  
  //debug: show min & max matrices
  for (int i = 0; i < numCnt; i++) {
    for (int j = 0; j < numCnt; j++) {
      std::cout << " | "  << minMatrix[i][j] 
                << " " << maxMatrix[i][j];
    }
    std::cout << " | \n";
  } // end outer for: debug
  */
  
  return maxMatrix[0][numCnt - 1];
  
}  // end get_maximum_value()

int main() {
  string s;
  std::cin >> s;
  std::cout << get_maximum_value(s) << '\n';
}
