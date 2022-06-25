#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  vector<string> t(n);
  rep(i, n) { cin >> s[i] >> t[i]; };

  rep(i, n) {
    bool can = false;
    for(auto &S : {s[i], t[i]}) {
      bool ok = true;
      rep(j, n) {
        if(i != j) {
          if(S == s[j] || S == t[j]) {
            ok = false;
            break;
          }
        }
      }
      if(ok) {
        can = true;
      }
    }
    if(!can) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
