#include<iostream>
using namespace std;

int main()
{ float X[]={0,1,2,4};
  float Y[]={1,3,9,81};
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
  cout<<"Using Lagrange Interpolation value of F(3)= "<<y<<endl;
  return 0;
}
