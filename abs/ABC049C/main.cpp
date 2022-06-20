#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string S;
  cin >> S;

  vector<string> accept{"dream", "dreamer", "erase", "eraser"};
  reverse(S.begin(), S.end());
  rep(i, 4) { reverse(accept.at(i).begin(), accept.at(i).end()); };

  bool can = true;
  for(int i = 0; i < S.size();) {
    bool can2 = false;
    for(int j = 0; j < 4; j++) {
      string d = accept.at(j);
      if(S.substr(i, d.size()) == d) {
        can2 = true;
        i += d.size();
      }
    }
    if(!can2) {
      can = false;
      break;
    }
  }

  if(can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
