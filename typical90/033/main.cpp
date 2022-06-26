#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;

  int count = 0;
  //どちらかが1の時は不適切な条件に当てはまらないので、全てのライトを照らせる。
  if(h == 1 || w == 1) {
    cout << h * w << endl;
    return 0;
  }
  rep(i, h) {
    if(i % 2 != 0)
      continue;
    rep(j, w) {
      if(i == 0 && j == 0) {
        count++;
        continue;
      }
      if(j % 2 != 0)
        continue;
      count++;
    }
  }

  cout << count << endl;
}
