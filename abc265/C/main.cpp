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

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> G(H, vector<char>(W));
  rep(i, H) rep(j, W) { cin >> G[i][j]; }

  vector<vector<bool>> seen(H, vector<bool>(W, false));

  bool is_stopped = false;
  int current_i = 0;
  int current_j = 0;
  while(!is_stopped) {

    if(G[current_i][current_j] == 'U' && current_i != 0) {
      // G i, jが U であり、かつ i != 0 ならば(i−1, j) へ移動する。
      if(seen[current_i - 1][current_j]) {
        cout << -1 << endl;
        return 0;
      }
      seen[current_i - 1][current_j] = true;
      current_i--;
    } else if(G[current_i][current_j] == 'D' && current_i != H - 1) {
      // G i, jが D であり、かつ i!= H ならば(i + 1, j) へ移動する。
      if(seen[current_i + 1][current_j]) {
        cout << -1 << endl;
        return 0;
      }
      seen[current_i + 1][current_j] = true;
      current_i++;
    } else if(G[current_i][current_j] == 'L' && current_j != 0) {
      // G i, jが L であり、かつ j!= 1 ならば(i, j−1) へ移動する。
      if(seen[current_i][current_j - 1]) {
        cout << -1 << endl;
        return 0;
      }
      seen[current_i][current_j - 1] = true;
      current_j--;
    } else if(G[current_i][current_j] == 'R' && current_j != W - 1) {
      // G i, jが R であり、かつ j!= W ならば(i, j+1) へ移動する。
      if(seen[current_i][current_j + 1]) {
        cout << -1 << endl;
        return 0;
      }
      seen[current_i][current_j + 1] = true;
      current_j++;
    } else {
      is_stopped = true;
    }
  }

  cout << current_i + 1 << " " << current_j + 1 << endl;

  return 0;
}
