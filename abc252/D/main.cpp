#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) { cin >> a[i]; }

  vector<vector<int>> list;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      for(int k = 0; k < N; k++) {
        if(i > j || j > k || i > k ||
           (a[i] == a[j] || a[j] == a[k] || a[i] == a[k])) {
          continue;
        } else {
          list.push_back({i + 1, j + 1, k + 1});
        }
      }
    }
  }

  cout << list.size() << endl;
}
