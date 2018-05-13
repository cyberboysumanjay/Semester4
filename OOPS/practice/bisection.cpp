#include<iostream>
#include<math.h>
using namespace std;

double f(double x)
{
    return x*x*x - 4*x -9 ;
}
double accuracy=0.001,c, i=1;

void bisection(double a,double b)
{

    c = a;

    while ((b-a)>= accuracy)
    {
        c = (a+b)/2;
        if (f(c) == 0.0)
        {
            cout << i<<"Exact Root is"<< c<<endl;
            break;
        }
        else if (f(c)*f(a) < 0)
        {
            cout << i<<"th Iteration Root = " << c <<endl;
            b = c;
        }
        else
        {
            cout << i<<"th Iteration Root = " << c<<endl;
            a = c;
        }
        i++;
    }
}

int main()
{
    cout<<"Roll No. 161210014\n";
    bisection(2,3);
    cout <<"Accurate Root calculated is = "<<c<<"\n";
    return 0;
}
