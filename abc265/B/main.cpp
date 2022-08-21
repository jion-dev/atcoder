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
  ll n, m, t;
  cin >> n >> m >> t;
  vector<ll> a(n);
  vector<bool> x(n);
  vector<ll> y(n);
  rep3(i, 1, n) cin >> a[i];
  rep(i, m) {
    ll c, d;
    cin >> c >> d;
    x[c] = true;
    y[c] = d;
  }

  ll current = 1;
  rep3(i, 1, n + 1) {
    current++;
    t -= a[i];
    if(x[current]) {
      t += y[current];
    }
    if(t <= 0) {
      debug("No");
      return 0;
    }
  }

  debug("Yes");

  return 0;
}
