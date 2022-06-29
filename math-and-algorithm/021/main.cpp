#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, r;
  cin >> n >> r;
  long long top = 1;
  long long bottom = 1;
  rep(i, r) {
    top *= n - i;
    bottom *= r - i;
  }
  cout << top / bottom << endl;
}
