#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> squares(n); // 0 or 1
  vector<int> ks(k);      //コマがあるpos(index+1)

  rep(i, k) {
    int pos;
    cin >> pos;
    ks[i] = pos;
    squares[pos - 1] = 1;
  };

  rep(i, q) {
    int l;
    cin >> l;
    int target = ks[l - 1];
    if(n == target || squares[target] == 1) {
      continue;
    }
    squares[target - 1] = 0;
    squares[target] = 1;
    ks[l - 1] = target + 1;
  }

  rep(i, k) {
    cout << ks[i];
    if(i != k - 1)
      cout << " ";
    else
      cout << endl;
  }
}
