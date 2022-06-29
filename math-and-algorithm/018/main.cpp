#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  long long n;
  cin >> n;
  long long a_100_count = 0;
  long long a_400_count = 0;
  long long a_200_count = 0;
  long long a_300_count = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if(a == 100)
      a_100_count++;
    if(a == 200)
      a_200_count++;
    if(a == 300)
      a_300_count++;
    if(a == 400)
      a_400_count++;
  }

  cout << a_100_count * a_400_count + a_200_count * a_300_count << endl;
}
