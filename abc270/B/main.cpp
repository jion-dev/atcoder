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
  int X, Y, Z;
  cin >> X >> Y >> Z;

  // 壁が逆か、奥にある場合か、ハンマーが壁までにある場合はまっすぐ
  if(X * Y < 0 or (X > 0 and X < Y) or (X < 0 and X > Y) or
     (Z > 0 and Z < Y and Y < X) or ((Z < 0 and Z > Y and Y > X))) {
    debug(abs(X));
    return 0;
  }

  // ハンマーが奥にあって不可能
  if((X > 0 and Y < Z) or (X < 0 and Z < Y)) {
    debug(-1);
    return 0;
  }

  // ハンマーがゴールと反対方向ににある場合
  debug(2 * abs(Z) + abs(X));

  return 0;
}
