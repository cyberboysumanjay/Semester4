#include<iostream>
using namespace std;
class Calc{
private:
  int a,b;
public:

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

  int setX (int a){
       this->a = a;
       return a;
   }

};


int main(){
  Calc obj1,obj2;
  int  a=obj1.setX(10);
  int  b=obj2.setX(2);

   obj1.add(a,b);
   obj1.sub(a,b);
   obj1.multiply(a,b);
   obj1.div(a,b);
}
