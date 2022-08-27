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
  ll Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
  cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

  //ベクトルAD,AB,ACの成分表示を求める
  ll ADx = (Dx - Ax), ADy = (Dy - Ay);
  ll ABx = (Bx - Ax), ABy = (By - Ay);
  ll ACx = (Ax - Cx), ACy = (Ay - Cy);

  // s: ACとABの外積
  // t: ADとACの外積
  ll s = (ACx * ABy) - (ACy * ABx);
  ll t = (ACx * ADy) - (ACy * ADx);

  bool can = s * t <= 0;

  debug(can ? "Yes" : "No");
  return 0;
}
