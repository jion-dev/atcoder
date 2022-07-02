#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int k;
  cin >> k;
  int minutes = k % 60;
  int hours = k / 60;

  int ans_hour = 21 + hours;
  string ans_minute =
      minutes < 10 ? "0" + to_string(minutes) : to_string(minutes);

  cout << ans_hour << ":" << ans_minute << endl;
  return 0;
}
