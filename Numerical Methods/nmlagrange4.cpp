#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    float mult,sum=0,a;

   n=4;

    float f[4]={1,3,9,81};
    float x[4]={0,1,2,4};
    a=3;

    for(i=0;i<=n-1;i++)
    {
    mult=1;
        for(j=0;j<=n-1;j++)
        {
            if(j!=i)
            mult*=(a-x[j])/(x[i]-x[j]);
        }
        sum+=mult*f[i];
    }
    cout<<"\nf(3) = "<<sum<<"\n";
    return 0;
}
