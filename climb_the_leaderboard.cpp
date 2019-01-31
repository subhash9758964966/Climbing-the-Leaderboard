#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int i;
  int a[n];
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  int b[m];
  for (i = 0; i < m; i++) {
    cin >> b[i];
  }
  int rank = 1;
  for (i = n-1; i > 0; i--) {
    if (a[i]<a[i - 1]) {
      rank++;
    }
  }

  rank++;
  int k = n - 1;
  int c[m];
  for (i = 0; i < m; i++) {
    while (b[i]>= a[k]) {
      if (rank == 1) {
        break;
      }
      if (a[k] == a[k - 1]) {
        k--;
      } else {
        k--;
        rank--;
      }
    }
    c[i] = rank;
  }
  for (i = 0; i < m; i++) {
    cout << c[i] << endl;
  }

  return 0;
}

