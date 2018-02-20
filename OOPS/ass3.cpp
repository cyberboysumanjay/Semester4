#include<iostream>
using namespace std;

class numbers
{   int a,b;

    public:

    void get(int x=0,int y=0)
    {
        a=x;
        b=y;
        cout<<"Entered Numbers are "<<a<<" and "<<b<<endl;
    }
    int getA()
    {  return a;}
    int getB()
    {  return b;}
};

class sum
{   int s;

    public:

     sum(numbers C)
     {
        s=C.getA()+C.getB();
     }
     void show()
     {
          cout<<"Sum of the numbers: "<<s<<endl;
     }
};

int main()
{
   numbers N;
   cout<<"Class Type to Another Class Type Conversion: "<<endl;
   N.get(6,7);
   sum S=N;
   S.show();
   return 0;
}
