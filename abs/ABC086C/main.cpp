#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int t[110000], x[110000], y[110000];
  t[0] = x[0] = y[0] = 0;
  rep(i, N) { cin >> t[i + 1] >> x[i + 1] >> y[i + 1]; }

  bool can = true;
  rep(i, N) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if(dist > dt)
      can = false;
    if(dist % 2 != dt % 2)
      can = false;
  }

  if(can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
