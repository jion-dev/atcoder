#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

long long base8_to_long(string n) {
  long long ans = 0, x = 1, m = n.size();
  for(int i = m - 1; i >= 0; i--) {
    ans += 1LL * (n[i] - '0') * x;
    x *= 8LL;
  }
  return ans;
}
string long_to_9base(long long n) {
  if(n == 0) {
    return "0";
  }
  string res;
  while(n > 0) {
    res = char(n % 9 + '0') + res;
    n /= 9;
  }
  return res;
}

string base8_to_base9(string n) { return long_to_9base(base8_to_long(n)); }

int main() {
  string n;
  int k;
  cin >> n >> k;

  rep(i, k) {
    string base9 = base8_to_base9(n);
    n = regex_replace(base9, regex("8"), "5");
  }

  cout << n << endl;
}
