#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  vector<int> abc(3);
  int b;
  cin >> abc.at(0) >> b >> abc.at(2);
  abc.at(1) = b;
  sort(abc.begin(), abc.end());

  string answer = abc.at(1) == b ? "Yes" : "No";
  cout << answer << endl;
}
