#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  string ans = "";
  rep(i, 4) {
    if(i == 0) {
      ans += '0';
      continue;
    }

    ans += s[i - 1] == '0' ? '0' : '1';
  }

  cout << ans << endl;
}
