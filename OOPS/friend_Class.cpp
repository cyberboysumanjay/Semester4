#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Record {
 string name;
 int ac_no;
 float bal;
 public :

 Record(string n="Name",int ac=161210040, float balance=0){
   name=n;
   ac_no=ac;
   bal=balance;
 }

   void print(){
     std::cout << "Welcome "<<name << '\n';
     std::cout << "Your Ac No is: "<<ac_no << '\n';
     std::cout << "Current Ac Balance is: "<< bal << '\n';
    }
    friend class Bank;

} ;

class Bank{
  float rate,ti;
public:
  Bank(float r=0,float t=1){
    rate=r;
    ti=t;
  }
   float SI (float bal, float rate, float ti){
     return bal*rate*ti/100;
   }
   float CI (float bal, float rate, float ti){
     return bal*(pow(1+(rate/100),ti))-bal;
   }
   void printInterest(float interest) {
     std::cout <<interest << '\n';
   }
};


int main(){
  string name;
  int ac_no;
  float balance,rate,t;
  std::cout << "Enter your Name: " << '\n';
  std::getline (std::cin, name);
  std::cout << "Enter your Ac no: " << '\n';
  std::cin >> ac_no;
  std::cout << "Enter Current Ac Balance:" << '\n';
  std::cin >> balance;
  std::cout << "Enter Interest Rate: " << '\n';
  std::cin >> rate;
  std::cout << "Enter Time Period: " << '\n';
  std::cin >> t;
  Record A(name,ac_no,balance);
  Bank B(rate,t);
  int choice;

do{
    std::cout << "Choose Option: " << '\n';
    std::cout << "1. See Details\t"<<"2. Calculate SI\t" <<"3. Calculate CI\t"<<"4. Exit" << '\n';
    std::cin >> choice;

    switch (choice) {
      case 1: std::cout << "Your Account details: " << '\n';A.print();
              break;
      case 2: std::cout << "Simple Interest for given data is: ";
              B.printInterest(B.SI(balance,rate,t));
              break;
      case 3: std::cout << "Compound Interest for given data is: ";
              B.printInterest(B.CI(balance,rate,t));
             break;
      case 4: std::cout << "Exiting...." << '\n';
              break;
    }
  }
  while (choice!=4);


}
