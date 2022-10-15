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
  vector<ll> A(N);

  rep(i, N) cin >> A[i];

  // ソート済み重複排除配列
  auto sorted_A = A;
  sort(ALL(sorted_A));
  set<ll> A_set(ALL(sorted_A));
  sorted_A.assign(ALL(A_set));

  map<ll, int> kind_count;
  rep(i, sorted_A.size()) { kind_count[sorted_A[i]] = sorted_A.size() - 1 - i; }

  map<int, ll> count_kind;
  for(auto a : A) {
    count_kind[kind_count[a]]++;
  }

  rep(i, N) { debug(count_kind[i]); }

  return 0;
}
