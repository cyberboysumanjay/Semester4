#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    float mult,sum=0,a;

   n=4;

    float x[4]={12,13,14,16};
    float f[4]={5,6,9,11};
    a=15;

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
    cout<<"\nf(15) = "<<sum<<"\n";
    return 0;
}
