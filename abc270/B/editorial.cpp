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

// pがaとbの間にあるか
bool f(int a, int b, int p) {
  if(a > b)
    swap(a, b);
  return a < p && p < b;
}

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int ans = -1;
  if(f(0, X, Y)) {
    if(f(0, Z, Y)) {
      ans = -1;
    } else {
      ans = abs(Z) + abs(X - Z);
    }
  } else {
    ans = abs(X);
  }
  debug(ans);

  return 0;
}
