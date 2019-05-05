#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

//using std::vector;
using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
  map<int, int> elemMap; 
  map<int, int>::iterator itr;
  
  int aNum;
  int aMaj;
  
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  
/*  
  elemMap.insert(pair<int, int>(10, 1));
  elemMap.insert(pair<int, int>(20, 2));
  elemMap.insert(pair<int, int>(30, 3));
*/

  for (int i = 0; i < a.size(); ++i) { 
    
    if (elemMap.find(a[i]) == elemMap.end()) {
      elemMap.insert(pair<int, int>(a[i], 1));
    }
    else {
      elemMap.at(a[i]) = elemMap.at(a[i]) + 1;
    }
  } // end for
  
  
  aNum = a.size();
  aMaj = aNum / 2;
  
  /*
  cout << "aMaj: " << aMaj << "\n";
  
  // print elemMap
  for (itr = elemMap.begin(); itr != elemMap.end(); ++itr) { 
    cout << '\t' << itr->first 
         << '\t' << itr->second << '\n'; 
  } 
  cout << endl; 
  */
  
  // Search for a majority element
  for (itr = elemMap.begin(); itr != elemMap.end(); ++itr) { 
    if (itr->second > aMaj)
      return 1;
  }
  
  /*
  for (auto itr = elemMap.find(30); itr != elemMap.end(); itr++) 
        cout << itr->first 
            << '\t' << itr->second << '\n'; 
  */
  
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
