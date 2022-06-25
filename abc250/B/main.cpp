#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int na = n * a;
  int nb = n * b;

  vector<vector<char>> d(na, vector<char>(nb));

  char temp = '.';
  rep(i, na) {
    if(i != 0) {
      if(i % a == 0) {
        temp = d[i - 1][0] == '.' ? '#' : '.';
      } else {
        temp = d[i - 1][0];
      }
    }
    rep(j, nb) {
      if(i == 0 && j == 0) {
        d[i][j] = '.';
        continue;
      }
      if(j != 0 && j % b == 0) {
        // tempを変える
        temp = temp == '.' ? '#' : '.';
      }
      d[i][j] = temp;
    }
  }

  rep(i, na) rep(j, nb) {
    cout << d[i][j];
    if(j == nb - 1)
      cout << endl;
  }
}
