#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<vector<char>> d(n, vector<char>(n));
  bool can = true;

  rep(i, n) rep(j, n) cin >> d[i][j];

  rep(i, n) rep(j, n) {
    if((d[i][j] == 'W' && d[j][i] != 'L') ||
       (d[i][j] == 'L' && d[j][i] != 'W') || (d[i][j] == 'D' && d[j][i] != 'D'))
      can = false;
  }

  if(can)
    cout << "correct" << endl;
  else
    cout << "incorrect" << endl;

  return 0;
}
