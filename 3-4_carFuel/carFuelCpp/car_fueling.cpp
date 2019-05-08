#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int numRefills = 0;
    int curRefill = 0;
    int lastRefill = 0;
    
    int n = stops.size();
    // cout << n << "\n";
    
    std::vector<int>::iterator it;
    it = stops.begin();
    stops.insert(it, 0);
    stops.push_back(dist);
/*    
    for (int i = 0; i <= n; ++i) {
      cout << stops[i] << " ";
    }
    cout << "\n";
 */
    
    while (curRefill <= n) {
      lastRefill = curRefill;   
      while (curRefill <= n && 
            ((stops[curRefill + 1] - stops[lastRefill]) <= tank)) {
        curRefill = curRefill + 1;  
      } // inner while
      if (curRefill == lastRefill)
        return -1;
      if (curRefill <= n)
        numRefills = numRefills + 1;
    } // outer while
/*    
    cout << "cr = " << curRefill << "\n";
    cout << "lr = " << lastRefill << "\n";
 */
    
    return numRefills;
}

int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
