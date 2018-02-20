
#include<iostream>
#include <math.h>

class Prime{
private:
  int a;
public:
  int Prime(int x){
    a=x;
    int count=0,n=sqrt(a)+1;
    for ( int i=2; i<n; i++) {
      if (a%i==0) {
        count++;
      }
    }
    return count;
  }
};

int main(){
  int x;
  std::cout << "Roll No. 161210040" << '\n'<< "Enter the number" << '\n';
  std::cin >> x;
  Prime obj1;

 int count=obj1.Prime(x);
  if (count==0) {
    std::cout << "Prime Number" << '\n';
  }
  else
  std::cout << "Not a Prime Number" << '\n';

}
