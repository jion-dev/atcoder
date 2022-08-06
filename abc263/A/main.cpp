#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int cards[5];
bool can = false;

int main() {
  map<int, int> n_count;
  for(int i = 0; i < 5; i++) {
    cin >> cards[i];
    n_count[cards[i]] += 1;
  }

  if(int(n_count.size()) == 2) {
    bool has2 = false;
    bool has3 = false;
    for(const auto &[key, value] : n_count) {
      if(value != 2 && value != 3)
        break;
      if(n_count.count(key) > 0) {
        if(value == 2) {
          has2 = true;
        } else {
          has3 = true;
        }
      }
    }
    if(has2 && has3)
      can = true;
  }

  if(can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
