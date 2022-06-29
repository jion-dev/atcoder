#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  int a[n], b[n];

  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  double ans = 0.0;
  rep(i, n) { ans += a[i] * (1.0 / 3.0) + b[i] * (2.0 / 3.0); }

  printf("%.12lf\n", ans);
}
