#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  int result = 2;
  if(N == 0) {
    result = 1;
  } else {

    rep(i, N) {
      if(i == 0) {
        continue;
      }
      result *= 2;
    }
  }
  cout << result << endl;
}
