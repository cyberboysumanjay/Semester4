#include <iostream>
#include <math.h>
using namespace std;
float f(float x)
{   float f;
    f=(x*x*x)-4*x-9;
    return f;
}
int main()
{ float a=2,b=3,x,i=1,arr[15];
  cout<<"f(x)=x^3-4x-9\n";
  cout<<"\na="<<a<<"  b="<<b<<"\n";
  arr[1]=f(3);
  arr[2]=f(2);

  while(fabs(arr[i+1]-arr[i]<0.001))
  {
     x=(a+b)/2;
     cout<<"\nx"<<i<<"="<<x<<endl;
     cin>>arr[i+2];

     if(f(x)<0)
        a=x;
     else
        b=x;
     i++;

  }
  x=(int)(x*1000);
  x=x/1000;
  cout<<"\nResult="<<x;
  return 0;
}
