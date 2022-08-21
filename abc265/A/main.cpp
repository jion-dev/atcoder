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
  int x, y, n;
  // 10, 40, 100
  cin >> x >> y >> n;

  int temp_count = 0;
  int sum_price = 0;
  bool should_choseX = (y / x) >= 3;
  while(temp_count < n) {
    if(temp_count + 3 > n) {
      temp_count += 1;
      sum_price += x;
    } else {
      temp_count += should_choseX ? 1 : 3;
      sum_price += should_choseX ? x : y;
    }
  }

  debug(sum_price);
  return 0;
}
