#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

// 以下全探索の方法

int main() {
  int n, m;
  cin >> n >> m;
  vector adj(n, vector<bool>(n));
  for(int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    u -= 1, v -= 1;
    adj[u][v] = adj[v][u] = true;
  }
  int ans = 0;
  for(int i = 0; i < n; ++i) {
    for(int j = i + 1; j < n; ++j) {
      for(int k = j + 1; k < n; ++k) {
        if(adj[i][j] and adj[j][k] and adj[k][i]) {
          ans += 1;
        }
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
