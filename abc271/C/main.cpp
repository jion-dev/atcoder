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
  ll N;
  cin >> N;
  if(N == 1) {
    debug(0);
    return 0;
  }
  vector<ll> a(N);
  rep(i, N) cin >> a[i];

  ll ans = 1;

  sort(ALL(a));
  ll current_num = 0;
  ll current_index = 0;
  while(1) {
    if(ll(a.size()) < 1)
      break;
    // 連番の場合
    if(current_num + 1 == a[current_index]) {
      ans++;
      current_index++;
      if(current_index == 9)
        break;
      // 配列が終了した場合
      if(ll(a.size()) - 1 == current_index)
        break;
      current_num = a[current_index];
    } else {
      // 連番ではないかつ残りの配列が2つ以上ならば、末尾から二つまでを売却し、連番のものを買う
      if(ll(a.size()) - current_index - 1 >= 2) {
        a.pop_back();
        a.pop_back();
        current_num++;
        current_index++;
        ans++;
      } else {
        break;
      }
    }
  }
  debug(ans);
  return 0;
}
