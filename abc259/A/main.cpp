#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  int ans;
  if(x < m) {
    ans = t;
  } else {
    int diff = n - m - (n - x);
    ans = t - d * diff;
  }

  cout << ans << endl;
  return 0;
}
