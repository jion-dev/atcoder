#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  string s;
  cin >> s;
  map<char, int> s_count;

  rep(i, s.size()) { s_count[s[i]] = i; }
  rep(i, s_count.size()) {
    int count = s_count[i];
    if(count == 1) {
      cout << count << endl;
      return 0;
    }
  }
  return 0;
}
