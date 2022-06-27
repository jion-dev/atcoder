#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  //隣接リスト
  vector<vector<int>> g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  };

  int answer = 0;
  rep(i, n) {
    int cnt = 0;
    for(int j : g[i]) {
      if(j < i)
        cnt++;
    }
    if(cnt == 1) {
      answer++;
    }
  }
  cout << answer << endl;
  return 0;
}
