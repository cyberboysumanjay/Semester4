#include<iostream>

using namespace std;
class calc
{
 int a,b;

 public:

  void add()
  {
    cout<<"Addition is "<<(a+b)<<endl;
  }

  void subtract()
  {
    cout<<"Subtraction is "<<(a-b)<<endl;
  }

  void multiply()
  {
    cout<<"Product is "<<(a*b)<<endl;
  }

  void divide()
  { if(b==0)
       cout<<"Denominator cannot be zero.\n";
    else
       cout<<"Division is "<<(a/b)<<endl;
  }

 int input()
   {
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
   }
 };
  int main()
{

     cout<<"Roll No. 161210040"<<"\n";
     calc obj1;
     obj1.input();

  int x;
  do{
  cout<<"1.Add\t"<<"2.Subtract\t"<<"3.Multiply\t"<<"4.Divide\t5.Exit"<<endl;
  cin>>x;
  switch(x)
  {
     case 1:obj1.add();break;
     case 2:obj1.subtract();break;
     case 3:obj1.multiply();break;
     case 4:obj1.divide();break;
     case 5:break;
  }
  }while(x!=5);
  return 0;
}
