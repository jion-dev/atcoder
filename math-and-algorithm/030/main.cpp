#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

long long N, W, w[109], v[109];
long long dp[109][100009];

int main() {
  cin >> N >> W;

  for(int i = 1; i <= N; i++)
    cin >> w[i] >> v[i];

  //配列初期化
  dp[0][0] = 0;
  for(int i = 1; i <= W; i++)
    dp[0][i] = -(1ll << 60);

  for(int i = 1; i <= N; i++) {
    for(int j = 0; j <= W; j++) {
      // A: dp[i-1][j]
      // B: dp[i-1][j-wi] + vi
      // dp[i][j] = max(dp[i-1][j], dp[i-1][j-wi] + vi)

      // j<w[i]のとき、方法Bをとる選び方ができない
      if(j < w[i])
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }

  long long ans = 0;
  for(int i = 0; i <= W; i++)
    ans = max(ans, dp[N][i]);
  cout << ans << endl;
  return 0;
}
