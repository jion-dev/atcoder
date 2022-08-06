#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int step = 1;
  int n;
  map<int, int> ps;

  cin >> n;
  rep(i, n - 1) {
    int p;
    cin >> p;
    ps[p] = i + 2;
  }
  int target = ps[1];
  while(target != n) {
    step++;
    target = ps[target];
  }

  cout << step << endl;
  return 0;
}
