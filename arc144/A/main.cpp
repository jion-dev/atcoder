#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  int N;
  cin >> N;
  int M = N * 2;
  // string a = to_string(N * 2);
  // int M = 0;
  // rep(i, a.size()){
  //   M += a[i] - '0';
  // }
  ll x = 0;

  string s = "x";
  vector<int> S;
  S.push_back(0);
  int currentIndex = 0;
  int currentNum = 0;

  rep(i, N) {
    currentNum++;
    s[currentIndex] = char(currentNum + '0');
    S.push_back(int(s[currentIndex] - '0') + S[S.size() - 1]);

    int sum = S[S.size() - 1];
    if(sum == N && sum * 2 == M) {
      x = stoll(s);
      break;
    }

    if(s[currentIndex] % 4 == 0) {
      S.clear();
      S.push_back(0);
      s.push_back('x');
      currentIndex++;
      currentNum = 0;
    }
  }

  cout << M << endl;
  cout << x << endl;

  return 0;
}
