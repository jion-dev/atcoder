#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n;

  bool can = true;

  vector<vector<string>> full(n, vector<string>(2));
  vector<string> array;
  rep(i, n) rep(j, 2) {
    string temp;
    cin >> temp;
    full[i][j] = temp;
    array.push_back(temp);
  }

  int cout = 0;
  rep(i, n) rep(j, n) {
    if(*find(array.begin(), array.end(), full[i][j]) == full[i][j]) {
    }

    // if(can) {
    //   cout << "Yes" << endl;
    // } else {
    //   cout << "No" << endl;
    // }
  }
