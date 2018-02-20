#include<iostream>
#include<stdlib.h>
using namespace std;
class bank
 {
   string name,type;
   int acc_no,balance,depo,withdraw;

  public:

  int input()
  {
    cout<<"Enter Customer Name: "<<"\n";
    cin>>name;
    cout<<"Enter Account Number: "<<"\n";
    cin>>acc_no;
    cout<<"Type of Account: "<<"\n";
    cin>>type;
    cout<<"Enter Current Account Balance: "<<"\n";
    cin>>balance;
  }

  void deposit()
  {
    cout<<"Enter the amount you wish to deposit: ";
    cin>>depo;
    cout<<"Current balance is: "<<(balance+depo)<<"\n";
  }

  void withdrawl()
  {
    cout<<"Enter the amount you wish to withdraw: ";
    cin>>withdraw;
    if(withdraw>balance+depo){
        cout<<"Insufficient Balance"<<"\n";
    }
    else{
    cout<<"Amount withdrawn is: "<<withdraw<<"\n";
    cout<<"Current balance is: "<<balance+depo-withdraw<<"\n";
    }
  }

  void display()
  {
    cout<<"Name: "<<name<<"\n";
    cout<<"Current A/C Balance is:"<<"\n"<<(balance+depo-withdraw)<<"\n";
  }
 };

 int main()
 {
  bank obj1;
  obj1.input();
  int a;
  while(1)
{
    cout<<"Enter the operation: "<<"\n1.Deposit\n"<<"\n2.Withdrawl\n"<<"\n3.Display Details\n"<<"\n4.Exit\n"<<"\n";
    cin>>a;
   switch(a)
   {
      case 1:obj1.deposit();break;
      case 2:obj1.withdrawl();break;
      case 3:obj1.display();break;
      case 4:cout<<"Exiting";exit(0);break;
   }
 }
 }
