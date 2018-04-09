#include<iostream>
#include<math.h>
using namespace std;

class Savings_Account{
  double Savings_Balance;
  static double annual_Interest_rate;
public:

  Savings_Account(double bal){
    Savings_Balance=bal;
  }

  void calculate_Monthly_Interest(){
    double monthly_Interest= Savings_Balance*annual_Interest_rate/12;
    Savings_Balance+=monthly_Interest;
    std::cout << "Monthly Interest is "<<monthly_Interest << '\n';
    std::cout << "Updated Account Balance is "<<Savings_Balance << '\n';
  }

   static void modify_Interest_Rate (double rate=3){
     annual_Interest_rate =rate;
   }
};
double Savings_Account::annual_Interest_rate=3;

int main (){
    cout<<"Roll number 161210040\n";
  std::cout << "Welcome to our Bank" << '\n';
  Savings_Account saver1(2000),saver2(3000);
  cout<<"For Saver 1 \n";
  saver1.calculate_Monthly_Interest();
  saver2.calculate_Monthly_Interest();
  saver1.modify_Interest_Rate(4);
  cout<<"\n";
   cout<<"For Saver 2 \n";
  saver1.calculate_Monthly_Interest();
  saver2.calculate_Monthly_Interest();

}
