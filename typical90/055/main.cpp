#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int n, p, q;
  cin >> n >> p >> q;
  vector<int> a(n);
  rep(i, n) { cin >> a[i]; }

  int pattern = 0;

  //定数倍を見積もる
  // nC5 = n(n-1)(n-2)(n-3)(n-4) / 5! ≒ n^5/120 で
  // 定数倍が1/120と軽いのでO(N^5)でも高速に計算可能
  rep(i, n) {
    for(int j = 0; j < i; j++) {
      for(int k = 0; k < j; k++) {
        for(int l = 0; l < k; l++) {
          for(int m = 0; m < l; m++) {
            //これだと計算中にオーバーフローするので、都度modして、値を小さくして考える。
            // if(a[i] * a[j] * a[k] * a[l] * a[m] % p == q)
            //   pattern++;
            if(1LL * a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q)
              pattern++;
          }
        }
      }
    }
  }

  cout << pattern << endl;
}
