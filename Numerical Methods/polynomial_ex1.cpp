#include <iostream>
using namespace std;

    double f(double x){
        double f;
        f=(x*x*x)-4*x-9;
        return f;
    }

    int main(){
        double a=2,b=3,x,i=1;
          while(i<=11)
          {
             x=(a+b)/2;
             if(f(x)<0)
                a=x;
             else
                b=x;
             i++;
          }
          cout<<x;
          return 0;
    }
