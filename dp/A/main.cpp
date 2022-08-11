#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int N, h[100009], dp[100009];
int main() {
  cin >> N;
  for(int i = 1; i <= N; i++)
    cin >> h[i];

  dp[0] = 0;
  dp[1] = 0;
  for(int i = 2; i <= N; i++) {
    if(i == 2) {
      dp[i] = abs(h[i] - h[i - 1]);
    } else {
      int v1 = dp[i - 1] + abs(h[i] - h[i - 1]);
      int v2 = dp[i - 2] + abs(h[i] - h[i - 2]);
      dp[i] = min(v1, v2);
    }
  }

  cout << dp[N] << endl;

  return 0;
}
