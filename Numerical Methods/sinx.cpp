#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{   double f;
    f=sin(x)-(1/x);
    return f;
}
int main()
{ double a=1,b=1.5,x,i=1;
  cout<<"f(x)=sin(x)-(1/x) \n";
  cout<<"\na="<<a<<" b="<<b<<"\n";
  while(i<=7)
  {
     x=(a+b)/2;
     cout<<i<<"th Iteration "<<"="<<x<<endl;
     if(f(x)<0)
        a=x;
     else
        b=x;
     i++;
  }
  x=(int)(x*1000);
  x=x/1000;
  cout<<"\nRoot="<<x;
  return 0;
}
