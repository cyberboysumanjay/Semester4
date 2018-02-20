#include <iostream>
using namespace std;

class product
{  int a,b,c;
   public:
   void get(int x,int y)
   {  a=x;
      b=y;
   }
   void show()
   {
       cout<<"Entered Numbers are "<<a<<" and "<<b<<endl;

   }
   operator int()
   {
      c=a*b;
      return c;
   }
};

int main()
{
   int p;
    cout<<"Class Type to Basic Type Conversion"<<endl;
   product C;
   C.get(4,9);
   C.show();
   p=C;
   cout<<"Multiplication of numbers are: "<<p;
   return 0;
}
