#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> s(H);
  vector<int> xs, ys;
  rep(i, H) cin >> s.at(i);
  rep(i, H) rep(j, W) {
    if(s.at(i).at(j) == 'o') {
      xs.push_back(i);
      ys.push_back(j);
    }
  }

  int dist = (abs(xs.at(0) - xs.at(1)) + abs(ys.at(0) - ys.at(1)));

  cout << dist << endl;
}
