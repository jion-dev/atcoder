#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> input_pair(N);
  rep(i, N) {
    pair<int, int> input;
    cin >> input.first >> input.second;
    input_pair.at(i) = input;
  }
  rep(i, N) {
    if(i + 1 == N)
      break;
    if(input_pair.at(i).second >= input_pair.at(i + 1).first) {
      int first = input_pair.at(i).first < input_pair.at(i + 1).first
                      ? input_pair.at(i).first
                      : input_pair.at(i + 1).first;
      int second = input_pair.at(i).second > input_pair.at(i + 1).second
                       ? input_pair.at(i).second
                       : input_pair.at(i + 1).second;
      input_pair.at(i) = make_pair(first, second);
      input_pair.erase(input_pair.begin() + i + 1);
      i--;
      N--;
    }
  }
  rep(i, input_pair.size()) {
    cout << input_pair.at(i).first << " " << input_pair.at(i).second << endl;
  }
}
