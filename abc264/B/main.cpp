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
  int R, C;
  cin >> R >> C;
  R--;
  C--;
  vector<vector<int>> grid(15, vector<int>(15));
  rep(i, 15) {
    rep(j, 15) {
      if((i == 0 || j == 0 || i == 14 || j == 14) ||
         ((i >= 2 && j >= 2) && i % 2 == 0 and (i <= j and j <= 14 - i)) ||
         ((i >= 2 && j >= 2) && j % 2 == 0 and (j <= i and i <= 14 - j))) {
        grid[i][j] = 1;
        grid[14 - i][14 - j] = 1;
      }
    }
  }
  if(grid[R][C] == 1)
    debug("black");
  else
    debug("white");
  return 0;
}
