#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

bool check_include(vector<int> array, int target) {
  rep(i, array.size()) {
    if(array.at(i) == target)
      return true;
  }
  return false;
}

int main() {
  int N;
  cin >> N;

  int count = 0;
  vector<int> uniq_array;
  rep(i, N) {
    int d;
    cin >> d;

    if(!check_include(uniq_array, d)) {
      uniq_array.push_back(d);
      count++;
    }
  }

  cout << count << endl;
}
