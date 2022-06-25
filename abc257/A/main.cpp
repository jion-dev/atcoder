#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, x;
  cin >> n >> x;

  char ans = 'A' + ceil((double(x) / double(n))) - 1;
  cout << char(ans) << endl;
}
