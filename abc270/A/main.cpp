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
  int A, B;
  cin >> A >> B;
  vector<bool> c_point(8, false);

  int ans = 0;
  if(A == 0 or B == 0)
    ans = 0;

  if(A == 1 or A == 2 or A == 4)
    c_point[A] = true;
  if(B == 1 or B == 2 or B == 4)
    c_point[B] = true;
  if(A == 3 or B == 3)
    c_point[1] = c_point[2] = true;
  if(A == 5 or B == 5)
    c_point[1] = c_point[4] = true;
  if(A == 6 or B == 6)
    c_point[2] = c_point[4] = true;
  if(A == 7 or B == 7)
    c_point[1] = c_point[2] = c_point[4] = true;

  rep3(i, 1, 7) {
    if(c_point[i])
      ans += i;
  }
  debug(ans);

  return 0;
}
