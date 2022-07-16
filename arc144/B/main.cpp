#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  ll N, a, b;
  cin >> N >> a >> b;
  vector<ll> A(N);
  rep(i, N) { cin >> A[i]; }

  ll max_num = *min_element(A.begin(), A.end());
  rep(i, N + 1) {
    rep(j, N + 1) {
      A[i] += a;
      A[j] -= b;
      ll temp_num = *min_element(A.begin(), A.end());
      max_num = max(temp_num, max_num);
    }
  }

  cout << max_num << endl;

  return 0;
}
