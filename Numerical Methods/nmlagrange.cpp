#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    float mult,sum=0,a;

   n=5;

    float x[5]={5,7,11,13,17};
    float f[5]={150,392,1452,2366,5202};
    a=9;

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
    cout<<"\nf(9) = "<<sum<<"\n";
    return 0;
}
