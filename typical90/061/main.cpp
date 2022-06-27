#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int q;
  cin >> q;
  deque<int> cards;
  vector<int> answers;
  rep(i, q) {
    int t, x;
    cin >> t >> x;
    if(t == 1) {
      cards.push_front(x);
    }
    if(t == 2) {
      cards.push_back(x);
    }
    if(t == 3) {
      answers.push_back(cards[x - 1]);
    }
  }
  rep(i, answers.size()) { cout << answers[i] << endl; }
}
