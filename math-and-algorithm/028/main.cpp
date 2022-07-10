#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, h[n], dp[n];

  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> h[i];
  for(int i = 1; i <= n; i++) {

    if(i == 1)
      dp[i] = 0;
    if(i == 2)
      dp[i] = abs(h[i] - h[i - 1]);
    if(i >= 3) {
      int v1 = dp[i - 1] + abs(h[i] - h[i - 1]);
      int v2 = dp[i - 2] + abs(h[i] - h[i - 2]);

      dp[i] = min(v1, v2);
    }
  }

  cout << dp[n] << endl;
}
