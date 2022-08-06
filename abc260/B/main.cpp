#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<int> a(n + 5), b(n + 5);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i <= n; i++) {
    cin >> b[i];
  }
  vector<bool> passed(n + 5, false);
  vector<int> c;
  for(int i = 1; i <= n; i++) {
    c.push_back(10000 * (100 - a[i]) + i);
  }
  sort(c.begin(), c.end());
  for(int i = 0; i < x; i++) {
    passed[c[i] % 10000] = true;
  }
  c.clear();
  for(int i = 1; i <= n; i++) {
    if(!passed[i]) {
      c.push_back(10000 * (100 - b[i]) + i);
    }
  }
  sort(c.begin(), c.end());
  for(int i = 0; i < y; i++) {
    passed[c[i] % 10000] = true;
  }
  c.clear();
  for(int i = 1; i <= n; i++) {
    if(!passed[i]) {
      c.push_back(10000 * (200 - (a[i] + b[i])) + i);
    }
  }
  sort(c.begin(), c.end());
  for(int i = 0; i < z; i++) {
    passed[c[i] % 10000] = true;
  }
  for(int i = 1; i <= n; i++) {
    if(passed[i]) {
      cout << i << "\n";
    }
  }
  return 0;
}
// 以下自分の解答

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

// //比較関数（を返す関数）
// template <class T> auto comp_idx(T *ptr) {
//   return [ptr](int l_idx, int r_idx) { return ptr[l_idx] < ptr[r_idx]; };
// }

// int N, X, Y, Z;
// vector<int> passed;

// int passXorY(int array[], int num_to_pass) {
//   int idx[N];
//   rep(i, N) { idx[i] = i; }
//   //インデックスソート
//   sort(idx, idx + N, comp_idx(array));

//   rep(i, idx) {
//     if(i == num_to_pass - 1)
//       break;
//     passed.push_back(i);
//   }
//   N -= num_to_pass;
// }

// int passZ(int arrayA[], int arrayB[], int num_to_pass) {
//   int sums[N];
//   rep(i, N) { sums[i] = arrayA[i] + arrayB[i]; }
//   int idx[N];
//   rep(i, N) { idx[i] = i; }
//   //インデックスソート
//   sort(idx, idx + N, comp_idx(sums));

//   rep(i, idx) {
//     if(i == num_to_pass - 1)
//       break;
//     passed.push_back(i);
//   }
//   N -= num_to_pass;
// }

// int main() {
//   cin >> N >> X >> Y >> Z;
//   int as[N], bs[N];

//   rep(i, N) { cin >> as[i]; }
//   rep(i, N) { cin >> bs[i]; }

//   // 数学の点が高い方から X 人を合格とする。
//   if(X > 0) {
//     passXorY(as, X);
//   }

//   //
//   次に、この時点でまだ合格となっていない受験者のうち、英語の点が高い方からY人を合格とする。
//   if(Y > 0) {
//     passXorY(bs, Y);
//   }
//   //
//   次に、この時点でまだ合格となっていない受験者のうち、数学と英語の合計点が高い方からZ
//   // 人を合格とする。
//   if(Z > 0) {
//     passZ(as, bs, Z);
//   }
//   // ここまでで合格となっていない受験者は、不合格とする。
//   return 0;
// }
