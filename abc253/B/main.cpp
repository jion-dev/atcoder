#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int H, W;
  cin >> H >> W;

  pair<vector<int>, vector<int>> circle_pos(vector<int>(2), vector<int>(2));
  bool isFirst = true;
  rep(i, H) {
    string input;
    cin >> input;
    int pos = input.find("o");
    if(pos != string::npos) {
      if(isFirst) {
        circle_pos.first = {i, pos};
        isFirst = false;
      } else {
        circle_pos.second = {i, pos};
      }
    }
  }

  int dist = (abs(circle_pos.first.at(0) - circle_pos.second.at(0)) +
              abs(circle_pos.first.at(1) - circle_pos.second.at(1)));

  cout << dist << endl;
}
