
#include < iostream >
  using namespace std;

class p {

  public:
    int i, j, temp;
  virtual int * sort(int a[], int n) {

    for (i = 1; i < n; i++) {
      temp = a[i];
      j = i - 1;
      while ((temp < a[j]) && (j >= 0)) {
        a[j + 1] = a[j];
        j = j - 1;
      }
      a[j + 1] = temp;
    }

    for (i = 0; i < n; i++) {
      std::cout << "Sorted Array is: " << a[i] << '\n';
    }
  }

};

class q {
  public:
    int i, k, temp;
  virtual int * resort(int a[], int n) {

    int temp;
    for (int i = 0; i < n / 2; i++) {
      a[i] = temp;
      temp = a[n - i - 1];
      a[n - i - 1] = a[i];
      a[i] = temp;
    }

    for (k = 0; k < n; k++) {
      std::cout << "Resorted Array is: " << a[k] << '\n';
    }
  }
};

int main() {
  int n = 5;
  int a[5] = {
    8,
    1,
    4,
    6,
    3
  };
  p p1;
  q q1;
  p1.sort(a, n);
  q1.resort(a, n);
}
