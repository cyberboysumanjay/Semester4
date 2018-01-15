#include<iostream>
using namespace std;
class Calc{
public:
  int a,b;

  void add(int a,int b){
    cout<< a+b<<"\n";
  }

  void sub(int a,int b){
    cout<< a-b<<"\n";
  }

  void multiply(int a,int b){
    cout<< a*b<<"\n";
  }

  void div(int a,int b){
    if (b==0) {
      cout<<"Error! Denominator can't be 0";
    }
    else
    cout<< a/b<<"\n";
  }
};

int main(){
  Calc obj1;
  obj1.a=10;
  obj1.b=2;

  obj1.add(obj1.a,obj1.b);
  obj1.sub(obj1.a,obj1.b);
  obj1.multiply(obj1.a,obj1.b);
  obj1.div(obj1.a,obj1.b);




}
