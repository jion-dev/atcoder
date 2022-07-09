// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

// int main() {
//   string S, T;
//   cin >> S >> T;

//   bool can = false;

//   int i = 0;
//   if(S.size() < T.size()) {
//     while(S.size() != T.size()) {
//       if(S[i] == T[i]) {
//         if(i < int(S.size() - 1) && S[i] == S[i + 1] &&
//            i + 2 <= int(T.size()) && T[i] == T[i + 1] && T[i] == T[i + 2]) {
//           S.insert(i + 1, {S[i]});
//         }
//         i++;
//       } else {
//         break;
//       }
//     }
//   }

//   if(S == T)
//     can = true;

//   if(can) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
//   return 0;
// }

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void rle(string s, vector<pair<char, int>> &vec) {
  int cnt = 1;
  for(int i = 0; i < (int)s.size(); i++) {
    if(s[i] != s[i - 1]) {
      vec.push_back({s[i - 1], cnt});
      cnt = 0;
    }
    cnt++;
  }
  vec.push_back({s.back(), cnt});
}
int main(void) {
  string s, t;
  cin >> s >> t;

  vector<pair<char, int>> svec, tvec;
  rle(s, svec), rle(t, tvec);
  if(svec.size() != tvec.size()) {
    cout << "No" << endl;
    return 0;
  }
  bool ans = true;
  for(int i = 0; i < svec.size(); i++) {
    if(svec[i].first != tvec[i].first)
      ans = false;
    if(!(svec[i].second == tvec[i].second ||
         svec[i].second < tvec[i].second && svec[i].second >= 2))
      ans = false;
  }
  if(ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
