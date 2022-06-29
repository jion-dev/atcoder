#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef long double ld;

ll calc_gcd(ll x, ll y) { return (x % y) ? calc_gcd(y, x % y) : y; }

int main() {
  ll n, a1, a2;
  cin >> n >> a1 >> a2;
  ll ans = calc_gcd(a1, a2);
  n -= 2;

  while(n--) {
    ll a;
    cin >> a;
    ans = calc_gcd(ans, a);
  }

  cout << ans << endl;
}
