#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int h, w, r, c;
  cin >> h >> w >> r >> c;

  int answer = 0;

  rep(i, h) {
    rep(j, w) {
      if(i != r - 1 || j != c - 1)
        continue;

      if(h == 1 && w == 1) {
        answer = 0;
        break;
      }
      if(h == 1 || w == 1) {
        if((i == 0 && j == 0) || (i == h - 1 && j == 0) ||
           (i == 0 && j == w - 1) || (i == h - 1 && j == w - 1)) {
          answer = 1;
          break;
        } else {
          answer = 2;
          break;
        }
      }
      if(h == 2 || w == 2) {
        if((i == 0 && j == 0) || (i == h - 1 && j == 0) ||
           (i == 0 && j == w - 1) || (i == h - 1 && j == w - 1)) {
          answer = 2;
          break;
        } else {
          answer = 3;
          break;
        }
      }

      if((i == 0 && j == 0) || (i == h - 1 && j == 0) ||
         (i == 0 && j == w - 1) || (i == h - 1 && j == w - 1)) {
        answer = 2;
        break;
      } else if(i == 0 || j == 0 || i == h - 1 || j == w - 1) {
        answer = 3;
        break;
      } else {
        answer = 4;
        break;
      }
    }
  }

  cout << answer << endl;
}
