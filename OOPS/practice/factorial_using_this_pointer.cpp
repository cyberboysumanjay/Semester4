#include <iostream>
using namespace std;

class factorial
{ int n;
  public:
         void fact(int n)
        {  int i=1,f=1;
           this->n=n;
           for(i=1;i<=n;i++)
               f=f*i;
           cout<<"Factorial of "<<n<<" is "<<f<<endl;
        }
};

int main()
{   int n;
    factorial f;
    cout<<"Roll No. 161210040\n";
    cout<<"Enter number: ";
    cin>>n;
    f.fact(n);
    return 0;
}
