
#include <iostream>
  using namespace std;

void ddf(int k) {
  int f, n = 6, i, j = 1, f1 = 1, f2 = 0;
  int p[n];
  int x[6] = {
    4,
    5,
    7,
    10,
    11,
    13
  };
  int y[6] = {
    48,
    100,
    294,
    900,
    1210,
    2028
  };

  f = y[1];

  do {
    for (i = 1; i <= n - 1; i++) {
      p[i] = ((y[i + 1] - y[i]) / (x[i + j] - x[i]));
      y[i] = p[i];
    }

    f1 = 1;
    for (i = 1; i <= j; i++) {
      f1 *= (k - x[i]);
    }
    f2 += (y[1] * f1);

    n--;
    j++;
  }

  while (n != 1);
  f += f2;
  cout << "\n" << "Value of f(" << k << ")=" << f << "\n";

}
int main() {
  cout << "Roll 161210040\n";
  ddf(8);
  ddf(15);
}
