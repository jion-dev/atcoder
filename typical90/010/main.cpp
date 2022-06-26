#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

// 以下ではO(N)で時間がかかる
// pair<int, int> sum(int start_index, int last_index, vector<pair<int, int>>
// ps) {
//   int sum1 = 0, sum2 = 0;
//   for(int i = start_index; i <= last_index; i++) {
//     if(ps[i].first == 1) {
//       sum1 += ps[i].second;
//     } else {
//       sum2 += ps[i].second;
//     }
//   }

//   return {sum1, sum2};
// }
// int main() {
//   int n, q;
//   cin >> n;
//   vector<pair<int, int>> ps(n); //{class, point}
//   rep(i, n) {
//     int c, p;
//     cin >> c >> p;
//     ps[i] = {c, p};
//   }
//   cin >> q;

//   vector<pair<int, int>> answers(q); //{c1-points, c2-points}
//   rep(i, q) {
//     int start, end;
//     cin >> start >> end;
//     start--;
//     end--;
//     answers[i] = sum(start, end, ps);
//     cout << answers[i].first << " " << answers[i].second << endl;
//   }

//累積和で合計値を求める
int main() {
  int n, q;
  cin >> n;
  vector<int> s1(n + 1);
  vector<int> s2(n + 1);
  rep(i, n) {
    int c, p;
    cin >> c >> p;
    if(c == 1) {
      s1[i + 1] = s1[i] + p;
      s2[i + 1] = s2[i];
    } else {
      s2[i + 1] = s2[i] + p;
      s1[i + 1] = s1[i];
    }
  }
  cin >> q;

  rep(i, q) {
    int start, end;
    cin >> start >> end;
    int c1_sum = s1[end] - s1[start - 1];
    int c2_sum = s2[end] - s2[start - 1];
    cout << c1_sum << " " << c2_sum << endl;
  }
}
