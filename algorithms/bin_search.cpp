#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> list;
  int n, number, low, high, guess;

  cin >> number;
  while (cin >> n) {
    list.push_back(n);
  }

  sort(list.begin(), list.end());

  low = 0;
  high = list.size() - 1;
  guess = (low + high) / 2;

  int i=0;
  while (i <= log2(list.size())) {
    if (list[guess] == number) {
      cout << guess << endl;
      break;
    } else {
      if (list[guess] > number) {
        high = guess;
        guess = (low + high) / 2;
      }

      if (list[guess] < number) {
        low = guess;
        guess = (low + high) / 2;
      }
    }
    i++;
  }

  if (list[guess] != number) {
    cout << "not found";
  }
}
