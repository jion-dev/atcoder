#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  string N;
  cin >> N;

  int pos = N.size() - 2;
  cout << N.substr(pos, 2) << endl;
}
