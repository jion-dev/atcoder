#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> total(N);
  int alice_p = 0;
  int bob_p = 0;
  rep(i, N) { cin >> total.at(i); }
  rep(i, N) {
    int max_point = *max_element(total.begin(), total.end());
    rep(i, total.size()) {
      if(total.at(i) == max_point) {
        total.erase(total.begin() + i);
        break;
      }
    }
    if(i % 2 == 0) {
      alice_p += max_point;
    } else {
      bob_p += max_point;
    }
  }
  int diff = abs(alice_p - bob_p);
  cout << diff << endl;
}
