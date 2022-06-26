#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<int>> squares(h, vector<int>(w));
  vector<int> sum_height(w);
  vector<int> sum_width(h);

  rep(i, h) {
    rep(j, w) {
      int square;
      cin >> square;
      squares[i][j] = square;
      sum_width[i] += square;
      sum_height[j] += square;
    }
  }

  rep(i, h) {
    rep(j, w) {
      squares[i][j] = sum_width[i] + sum_height[j] - squares[i][j];
      cout << squares[i][j];
      if(j == w - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}
