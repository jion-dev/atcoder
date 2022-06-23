#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> a(N);
  vector<int> b(K);

  int max_tasty = 0;
  for(auto &nx : a) {
    cin >> nx;
    if(nx > max_tasty)
      max_tasty = nx;
  }

  vector<int> index_eat;
  rep(i, N) {
    if(a[i] == max_tasty)
      index_eat.push_back(i + 1);
  }
  bool can = false;
  for(auto &nx : b) {
    cin >> nx;
    rep(i, index_eat.size()) {
      if(nx == index_eat[i]) {
        can = true;
        continue;
      }
    }
  }

  if(can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
