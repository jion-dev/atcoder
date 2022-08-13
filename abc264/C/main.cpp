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
  int H1, W1, H2, W2;
  cin >> H1 >> W1;
  H1--;
  W1--;
  vector<vector<int>> A1(H1, vector<int>(W1));
  rep(i, H1) {
    rep(j, W1) { cin >> A1[i][j]; }
  }
  cin >> H2 >> W2;
  H2--;
  W2--;
  vector<vector<int>> A2(H2, vector<int>(W2));
  rep(i, H2) {
    rep(j, W2) { cin >> A2[i][j]; }
  }

  bool can = false;

  rep(i, H2){A2[i][0]}

  debug(can ? "Yes" : "No");

  return 0;
}
