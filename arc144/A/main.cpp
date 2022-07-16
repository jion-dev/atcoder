#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int N;
  cin >> N;
  int M = N * 2;
  cout << M << endl;

  ll x;
  if(N - 4 < 0) {
    x = N;
    cout << x << endl;

  } else {
    int four_num = N / 4;
    int rest = N % 4;
    string s = rest == 0 ? "" : to_string(rest);
    rep(i, four_num) { s.push_back('4'); }
    cout << s << endl;
  }

  return 0;
}
