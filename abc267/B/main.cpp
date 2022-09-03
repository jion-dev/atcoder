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
  string S;
  cin >> S;
  S = '$' + S;
  if(S[1] == '1') {
    debug("No");
    return 0;
  }

  // 全て倒れていたらfalse, 一本でも残っていたらtrue
  vector<bool> col(7, false);
  col[0] = (S[7] == '1');
  col[1] = (S[4] == '1');
  col[2] = (S[2] == '1') or (S[8] == '1');
  col[3] = (S[1] == '1') or (S[5] == '1');
  col[4] = (S[3] == '1') or (S[9] == '1');
  col[5] = (S[6] == '1');
  col[6] = (S[10] == '1');

  bool isSplit = false;
  rep(i, 7) {
    rep(j, i) {
      if(col[i] and col[j]) {
        rep3(k, j + 1, i) {
          if(!col[k])
            isSplit = true;
          break;
        }
      }
    }
  }
  if(isSplit) {
    debug("Yes");
  } else {
    debug("No");
  }
  return 0;
}
