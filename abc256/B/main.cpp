#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> base(4);
  int point = 0;
  rep(i, N) {
    int A;
    cin >> A;
    //現在のベースを離れて次のベースに進む
    vector<int> target(4);
    rep(j, 4) {
      if(base.at(j) == 1) {

        int proceed = j + A;
        if(proceed > 3) {
          point++;
        } else {
          target.at(proceed) = 1;
        }
      }
    }
    base = target;

    //自分自身
    if(A > 3) {
      point++;
    } else {
      base.at(A) = 1;
      base.at(0) = 0;
    }
  }
  cout << point << endl;
}
