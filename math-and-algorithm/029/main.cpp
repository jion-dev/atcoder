#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, dp[54];
  cin >> n;
  for(int i = 0; i <= n; i++) {
    if(i <= 1) {
      dp[i] = 1;
    } else {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
  }
  cout << dp[n] << endl;
}
