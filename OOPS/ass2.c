
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
       cout<<"Numbers are "<<a<<" and "<<b<<endl;

   }
   operator int()
   {  cout<<"Class Type to ==> Basic Type Conversion..."<<endl;
      c=a*b;
      return c;
   }
};

int main()
{
   int p;
   product C;
   C.get(12,5);
   C.show();
   p=C;
   cout<<"Product of numbers is "<<p;
   return 0;
}
