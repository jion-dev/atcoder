#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  string answer = (a + b + c) / 3 == b ? "Yes" : "No";
  cout << answer << endl;
}
