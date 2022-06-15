#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int count = 0;
  rep(i, 3) {
    if(s.at(i) == '1') {
      count++;
    }
  }
  cout << count << endl;
}
