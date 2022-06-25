#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int answer = 0;
  rep(i, 10) {
    size_t pos = s.find(to_string(i));
    if(pos == string::npos) {
      answer = i;
      break;
    }
  }

  cout << answer << endl;
}
