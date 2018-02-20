#include<iostream>
using namespace std;
double f(double x)
{
    return x*x*x - 4*x -9 ;
}

double accuracy=0.001;
double c;
int i=1;

void bisection(double a,double b)
{
    if(f(a) * f(b) >= 0)
    {
        cout<<"Root isn't between a and b";
        return;
    }

    c = a;

    while ((b-a) >= accuracy)
    {
        c = (a+b)/2;
        if (f(c) == 0.0){
            cout << i<<"th Iteration Root" << c<<endl;
            break;
        }
        else if (f(c)*f(a) < 0){
            cout << i<<"th Iteration Root = " << c<<endl;
                b = c;
        }
        else{
                cout << i<<"th Iteration Root = " << c<<endl;
                a = c;
        }
        i++;
    }
}

int main()
{
    double a,b;
    a=2;
    b=3;

    cout<<"The function used is x^3-4x-9\n";
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    bisection(a,b);
    cout<<"\n";
    cout<<"Accurate Root calculated is = "<<c<<endl;

    return 0;
}
