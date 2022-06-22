#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, C;

  cin >> A >> C;

  vector<vector<int>> arrList(2);
  vector<int> arry1(2);
  int val, val2;
  cin >> val >> val2;
  arry1.push_back(val);
  arry1.push_back(val2);

  arrList.push_back(arry1);
  vector<int> arry2(2);
  int val3, val4;
  cin >> val3 >> val4;
  arry2.push_back(val3);
  arry2.push_back(val4);
  arrList.push_back(arry2);

  cout << arrList.at(A + 1).at(C + 1) << endl;
}
