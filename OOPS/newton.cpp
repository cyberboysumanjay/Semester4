#include<iostream>
using namespace std;
 double derivative(double x) {
    return 3*x*x-3;
  }

  double f(double x) {
    return x*x*x-3*x+1;
  }
double nextRoot (double x, int iteration) {
    return ( x- ( f(x)/derivative(x) ) );
  }



  int main() {
    double x,x1=0;
    cout<<"Enter Trail Root: "<<"\n";
    cin>>x;
    int iteration=1;

    do {
      x1=x;
      x=nextRoot(x, iteration);
      cout<<"Root after "<<iteration<<"th iteration is: "<<x<<"\n";
      iteration++;
    }
    while ((int) (x1*10000)!= (int)(x*10000));
  }

