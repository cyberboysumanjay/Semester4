#include<iostream>
using namespace std;
int choiceChoosing(){
  int choice;
std::cout << "Welcome!" << '\n';
std::cout << "Press 1 for Deposting Amount "<< '\n';
std::cout << "Press 2 for Withdrawing Money" << '\n';
std::cout << "Press 3 to view your Current Balance" << '\n';
std::cout << "Press 4 to exit" << '\n';
std::cin >> choice;
return choice;
}

int depositAmount (int a,int balance){
  balance+=a;
  return balance;
}
int withdrawAmount (int withdraw,int balance){

  if (balance>withdraw) {
    balance-=withdraw;
  }
  else {
  std::cout << "Insufficient Balance!" << '\n';
  std::cout << "Standard bank charges are applicable for this" << '\n';
  balance-=22;
  }
}

void displayDetails(string name, int balance) {
  std::cout << "Hello " << name<< '\n';
  std::cout << "Your accounr Balance is " <<balance<< '\n';
}



class Bank{
private:
  int a,ac_no,balance;
  string name,ac_type;
public:

string setName (string name){
       this->name = name;
       return name;
   }
int setAc (int a){
        this->a = a;
        return a;
    }
string setAcType (string ac_type){
         this->ac_type = ac_type;
         return ac_type;
     }
int setBalance (int a){
          this->a = a;
          return a;
      }

void getBalance(int a) {
        this->a =a;
      }

};


int main(){
  string name,ac_type;
  int ac_no,balance,input,choice,deposit,withdraw;
std::cout << "Enter your Name:" << '\n';
cin>>name;

std::cout << "Enter Account Number:" << '\n';
std::cin >> ac_no;

std::cout << "Type of Account?" << '\n';
std::cout << "Press 1 for Savings Ac" << '\n';
std::cout << "Press 2 for Current Ac" << '\n';
cin>> input;
  if (input==1) {
    ac_type="savings";
  }
  else if (input==2) {
    ac_type="current";
  }
  else
  std::cout << "Wrong Input!" << '\n';

  std::cout << "Current Balance" << '\n';
  std::cin >> balance;
choice=choiceChoosing();

while (choice!=4) {
  if (choice==1) {
    std::cout << "Enter the amount you wish to deposit" << '\n';
    std::cin >> deposit;
    balance=depositAmount(deposit,balance);
  }
  else if (choice==2) {
    std::cout << "How much money you want to withdraw" << '\n';
    std::cin >> withdraw;
  balance=withdrawAmount(withdraw,balance);
  }

  else if(choice ==3) {
    std::cout << "Your current AC Balance is" <<balance<< '\n';
  }
  else
  std::cout << "Wrong Input!" << '\n';
}


  // int  a=obj1.setX(10);
  // int  b=obj2.setX(2);

  //  obj1.add(a,b);
  //  obj1.sub(a,b);
  //  obj1.multiply(a,b);
  //  obj1.div(a,b);
}
