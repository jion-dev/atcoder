#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<vector<int>> array(N, vector<int>(N));
  rep(i, N) {
    if(i == 0) {
      array.at(0).at(0) = 1;
      continue;
    }
    rep(j, N) {
      if(j == 0) {
        array.at(i).at(j) = 1;
        continue;
      }
      if(i == j) {
        array.at(i).at(j) = 1;
        break;
      }
      array.at(i).at(j) = array.at(i - 1).at(j - 1) + array.at(i - 1).at(j);
    }
  }

  rep(i, N) {
    rep(j, N) {
      cout << array.at(i).at(j);
      if(j == i) {
        cout << endl;
        break;
      } else {
        cout << " ";
      }
    }
  }
}
