#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

ll GCD(ll x, ll y) { return (x % y) ? GCD(y, x % y) : y; }
ll LCM(ll x, ll y) { return x / GCD(x, y) * y; }

int main() {
  ll n, a1, a2;
  cin >> n >> a1 >> a2;
  ll ans = LCM(a1, a2);
  n -= 2;
  while(n--) {
    ll a;
    cin >> a;
    ans = LCM(ans, a);
  }

  cout << ans << endl;

  return 0;
}
