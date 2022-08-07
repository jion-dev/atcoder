#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  cout << max(0, min(r1, r2) - max(l1, l2)) << endl;
  return 0;
}
