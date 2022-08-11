#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int N, K, h[100009], dp[100009];
int main() {
  cin >> N >> K;
  for(int i = 1; i <= N; i++)
    cin >> h[i];

  dp[0] = 0;
  dp[1] = 0;
  for(int i = 2; i <= N; i++) {
    if(i == 2) {
      dp[i] = abs(h[i] - h[i - 1]);
    } else {
      int possible_jump_count = i <= K ? i - 1 : K;
      int temp = INT_MAX;
      for(int j = 1; j <= possible_jump_count; j++) {
        int v1 = dp[i - j] + abs(h[i] - h[i - j]);
        temp = min(temp, v1);
      }
      dp[i] = temp;
    }
  }

  cout << dp[N] << endl;

  return 0;
}
