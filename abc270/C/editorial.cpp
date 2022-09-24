#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(void) {
  int n, x, y;
  int u, v;

  cin >> n >> x >> y;
  vector<vector<int>> to(n + 1);
  rep(i, n - 1) {
    cin >> u >> v;
    to[u].push_back(v);
    to[v].push_back(u);
  }

  vector<int> ans;
  auto dfs = [&](auto f, int v, int p = -1) -> bool {
    if(v == x) {
      ans.push_back(v);
      return true;
    }
    for(int u : to[v]) {
      if(u == p)
        continue;
      if(f(f, u, v)) {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };

  dfs(dfs, y);

  rep(i, ans.size()) {
    cout << ans[i];
    if(i == ans.size() - 1)
      cout << endl;
    else
      cout << " ";
  }

  return 0;
}
