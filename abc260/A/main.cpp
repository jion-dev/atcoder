#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  string s;
  cin >> s;
  map<char, int> s_count;

  rep(i, s.size()) { s_count[s[i]] += 1; }
  for(const auto &[ans, count] : s_count) {
    if(count == 1) {
      cout << ans << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
