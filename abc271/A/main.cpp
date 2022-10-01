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

std::string itoh(int x, int size = 0) {
  char hex_buf[16];
  sprintf(hex_buf, "%X", x);
  std::string hex_str = hex_buf;
  if(size == 0) {
    return hex_str;
  }
  std::string front;
  if(x >= 0)
    front = "0";
  else
    front = "F";
  // 指定のサイズになるまで文字を増やす
  int diff = size - hex_str.length();
  for(int i = 0; i < diff; i++) {
    hex_str = front + hex_str;
  }
  // 指定のサイズになるまで文字を減らす
  if(diff < 0) {
    hex_str.erase(0, -diff);
  }
  return hex_str;
}

int main() {
  ll N;
  cin >> N;
  debug(itoh(N, 2));

  return 0;
}
