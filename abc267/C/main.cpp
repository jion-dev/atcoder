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
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  vector<ll> acc(N + 1);
  rep(i, N) {
    if(i < M) {
      acc[i + 1] = A[i] * (i + 1);
    }
    acc[i + 1] = acc[i] + A[i];
  }
  ll max_sum = -LONG_LONG_MAX;
  debugN(acc);

  for(int i = N - 1; i >= N - M - 1; i--) {
    ll sum = acc[i + 1] - acc[i - 1];
    debugN(sum);
    max_sum = max(sum, max_sum);
  }

  // rep(i, N - M + 1) {
  //   ll sum = 0;
  //   rep(j, M) { sum += A[i + j] * (j + 1); }
  //   max_sum = max(max_sum, sum);
  // }
  debug(max_sum);
  return 0;
}
