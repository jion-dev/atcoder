#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

// これではO(N^2)なのでTLE
// int main() {
//   int n;
//   cin >> n;
//   vector<string> users(n);

//   rep(i, n) {
//     string user;
//     cin >> user;
//     if(*find(users.begin(), users.end(), user) != user) {
//       users[i] = user;
//       cout << i + 1 << endl;
//     }
//   }
// }

// mapを使うとO(NlogN)の計算量で、速くなる。
int main() {
  int n;
  cin >> n;
  map<string, int> map_users;

  rep(i, n) {
    string user;
    cin >> user;
    if(map_users[user] == 0)
      cout << i + 1 << endl;
    map_users[user] = 1;
  }
}
