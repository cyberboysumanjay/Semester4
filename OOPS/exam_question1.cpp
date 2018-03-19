#include<iostream>
#include<math.h>
using namespace std;

class Polar {
double x,y,r,a,pi;
public:
Polar(){

}

  Polar (double r, double a) {
    pi=3.14;
    x=r *cos (a*pi/180);
    y=r *sin (a*pi/180);
  }

  Polar operator + (Polar P1){
    Polar P2;
    P2.x=x+P1.x;
    P2.y=y+P1.y;
    P2.a= (atan (P2.y/P2.x))*(180/pi);
    P2.r=sqrt (P2.x*P2.x + P2.y*P2.y);
    return P2;
  }

  void print (Polar p){
    std::cout << "Sum of two polar co-ordinates is the point "<<p.r<<" and angle in degree is "<<p.a << '\n';
  }
};

int main (){
Polar p1(1,0),p2(1,0);
Polar p3= p1+p2;
p3.print(p3);
}
