#include<iostream>
using namespace std;
class Calc{
private:
  int a,b;
public:

  void add(){
    cout<<"Sum is: "<<a+b<<"\n";
  }

  void sub(){
    cout<<"Difference is: "<< a-b<<"\n";
  }

  void multiply(){
    cout<< "Product is: "<<a*b<<"\n";
  }

  void div(){
    if (b==0) {
      cout<<"Error! Denominator can't be 0";
    }
    else
    cout<< "Quotient is: "<<a/b<<"\n";
  }

  void print(){
      cout<<"Roll No. 161210040"<<"\n";
  cout<<"The numbers are: "<<a<<" and "<<b<<"\n";
  }

  Calc(int x=0,int y=0){
  a=x;
  b=y;
  }

};

int main(){

   Calc obj1(10,0);
   obj1.print();
   obj1.add();
   obj1.sub();
   obj1.multiply();
   obj1.div();
}
