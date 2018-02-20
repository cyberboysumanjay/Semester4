#include<iostream>
#include<cstdlib>
using namespace std;
class RPS {
public:
  int humanScore,AIScore,Ties;

  void displayWinner(int humanScore,int AIScore) {
    std::cout << "CPU Score "<<AIScore << '\n';
    std::cout << "Human Score "<<humanScore << '\n';

    if (humanScore>AIScore) {
      std::cout << "Human won!" << '\n';
    }
    else if(humanScore<AIScore){
      std::cout << "CPU Won!" << '\n';
    }
    else if (humanScore==AIScore){
      std::cout << "That's tie! " << '\n';
    }
  }
   void startGame(){
    RPS rps1;
    std::cout << "1. Rock\t"<< "2. Paper\t"<< "3. Scissors\t" << '\n';
    int userIP=game1.userInput();
    int cpuIP=rps1.RPS_CPUInput();
    std::cout << "CPU chose ";
    rps1.displayInput(cpuIP);
    std::cout << "You chose ";
    rps1.displayInput(userIP);
    rps1.checkWin(userIP,cpuIP);
    game1.iWontLetYouWin(rps1.humanScore,rps1.AIScore);
    }

  void checkWin(int userIP, int cpuIP) {
    if (userIP==1&&cpuIP==3 || userIP==3 && cpuIP==2||userIP==2 && cpuIP==1){
      humanScore=1;
      AIScore=0;
      displayWinner(humanScore,AIScore);
    }
    else if (cpuIP==1&&userIP==3 || cpuIP==3 && userIP==2 || cpuIP==2 && userIP==1){
      humanScore=0;
      AIScore=1;
      displayWinner(humanScore,AIScore);
    }
    else{
      humanScore=0;
      AIScore=0;
      Ties=1;
      displayWinner(humanScore,AIScore);
    }

  }

    int RPS_CPUInput(){
      int input= (rand() % 3) +1;
      return input;
    }

    void displayInput(int userIP) {

      if (userIP==1) {
      std::cout << "Rock" << '\n';
      }
     else if (userIP==2) {
      std::cout << "Paper" << '\n';
     }
     else if (userIP==3) {
      std::cout << "Scissors" << '\n';
      }
    }

  };



  class Game: public RPS {
  public:
    int userInput(){
      int choice;
      std::cout << "What's your pick for this turn?" << '\n';
      cin>>choice;
      return choice;
    }
    void iWontLetYouWin(int humanScore, int AIScore) {
      if (humanScore<AIScore) {
        std::cout << "Beat AI in next Game!" << '\n';
        startGame();
      }
      else if(humanScore>AIScore){
        std::cout << "You're smart!" << '\n';
      }
      else {
        std::cout<<"Play Another Game"<<"\n";
        startGame();
      }
    }
  };

  int main (){
    std::cout << "Roll No. 161210040" << '\n';
    RPS rps2;
    rps2.startGame();

  }
