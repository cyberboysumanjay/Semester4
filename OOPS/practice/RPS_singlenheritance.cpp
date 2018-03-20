#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class RPS {
public:
  int humanScore,AIScore,Ties;
  RPS(int humanScore=0,int AIScore=0,int Ties=0) {

  }

  void displayWinner(int humanScore,int AIScore) {
    std::cout << "CPU Score"<<AIScore << '\n';
    std::cout << "Human Score"<<humanScore << '\n';
    if (humanScore>AIScore) {
      std::cout << "Human won!" << '\n';
      humanScore=0;
    }
    else if(humanScore>AIScore){
      std::cout << "CPU Won!" << '\n';
      AIScore=0;
    }
    else{
      std::cout << "That's tie! " << '\n';
    }
  }

  void checkWin(int userIP, int cpuIP) {
    if (userIP==1&&cpuIP==3){
      humanScore++;
    }
    else if (userIP==3 && cpuIP==2 ) {
      humanScore++;
    }
    else if (userIP==2 && cpuIP==1) {
      humanScore++;
    }
    else if (cpuIP==1&&userIP==3 || cpuIP==3 && userIP==2 || cpuIP==2 && userIP==1){
      AIScore++;
    }
    else{
      Ties++;
    }

    displayWinner(humanScore,AIScore);
  }

    int RPS_CPUInput(){
      srand((int)time(0));
        int ai = rand() % 3 + 1;
        cout <<  "The computer chose: " << ai << endl;
        return ai;
    }

    void displayMenu(){
    //  std::cout << "1. Rock\t"<< "2. Paper\t"<< "3. Scissors\t" << '\n';
        cout << "-- Rock, Paper, Scissors! --" << endl;
       // cout << "--------------------------------------" << endl;
        cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
        cin >> choice;
    }

    void displayUser_Input(int userIP) {
      std::cout << "You chose ";
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
      }
      else{
        std::cout << "You're smart!" << '\n';
      }
    }
  };

  int main (){
    std::cout << "Roll No. 161210040" << '\n';

    RPS rps1;
    Game game1;
    rps1.displayMenu();
    int userIP=game1.userInput();
    int cpuIP=game1.RPS_CPUInput();
    rps1.displayAI_Input(cpuIP);
    rps1.displayUser_Input(userIP);
    rps1.checkWin(userIP,cpuIP);
  }
