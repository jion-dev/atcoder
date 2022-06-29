#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  double ans = 0;
  for(int i = 1; i <= n; i++) {
    ans += 1.0 * n / i;
  }
  printf("%.12lf\n", ans);
}
