#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) x.begin(), x.end()
#define debug(var)                                                             \
  do {                                                                         \
    view(var);                                                                 \
  } while(0)
#define debugN(var)                                                            \
  do {                                                                         \
    std::cout << #var << " : ";                                                \
    view(var);                                                                 \
  } while(0)
template <typename T> void view(T e) { std::cout << e << std::endl; }
template <typename T> void view(const std::vector<T> &v) {
  for(const auto &e : v) {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}
template <typename T> void view(const std::vector<std::vector<T>> &vv) {
  for(const auto &v : vv) {
    view(v);
  }
}

using Graph = vector<vector<ll>>;
ll N, X, Y;

// 深さ優先探索
vector<bool> seen;
vector<ll> ans;

void dfs(const Graph &G, ll v) {
  seen[v] = true; // v を訪問済にする
  ans.push_back(v);
  if(v == Y) {
    rep(i, ans.size()) { cout << ans[i] << " "; }
    cout << endl;
    return;
  }

  // v から行ける各頂点 next_v について
  for(auto next_v : G[v]) {
    if(seen[next_v])
      continue;     // next_v が探索済だったらスルー
    dfs(G, next_v); // 再帰的に探索
  }
}

int main() {
  cin >> N >> X >> Y;
  vector<ll> U(N - 1), V(N - 1);
  rep(i, N - 1) { cin >> U[i] >> V[i]; }
  vector<vector<ll>> G(N);
  rep(i, N - 1) {
    G[U[i]].push_back(V[i]);
    G[V[i]].push_back(U[i]);
    debugN(G);
  }

  // 頂点 X をスタートとした探索
  seen.assign(N, false); // 全頂点を「未訪問」に初期化
  dfs(G, X);
  return 0;
}
