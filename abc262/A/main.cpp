#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int y;
  cin >> y;
  int rest = y % 4;
  int ans = rest == 0 ? y + 2 : rest == 1 ? y + 1 : rest == 3 ? y + 3 : y;
  cout << ans << endl;
  return 0;
}
