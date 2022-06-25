#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;

  int size = s.size();
  int loop_count = ceil(double(6 / size));
  string ret = "";
  rep(i, loop_count) { ret += s; }
  cout << ret << endl;
}
