#include<iostream>
using namespace std;

int main()
{ float X[]={0,1,2,5};
  float Y[]={2,3,12,147};
  int x=3,i=0,j=0;
  float y,p;
  for(i=0;i<4;i++)
  {  p=1;
           for(j=0;j<4;j++)
           {    if(j!=i)
               { p*=(x-X[j])/(X[i]-X[j]);
               }
           }
      y+=p*Y[i];
  }
  cout<<"The value of f(3) is "<<y<<endl;
  return 0;
}
