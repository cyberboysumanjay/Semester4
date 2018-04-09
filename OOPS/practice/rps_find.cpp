
#include <iostream>
#include <cstdlib>
#include<stdlib.h>
using namespace std;

class RPS
{
 public:
    int choice2,ac;
    int score1,score2;
     RPS()
     {  score1=score2=0;
     }
    int AIinput();
    void score(int,int);
    void checkwin(int,int);
};

class Game:public RPS
{   int choice1,uc;
  public:
    int userInput();
};

int main()
{  system("color F0");
   Game g;
   int a,b,i,n;
   cout<<"Roll No. 161210014\n";
   cout<<"How many games you want to play? ";
   cin>>n;
   cout<<"\n1.ROCK      2.PAPER       3.SCISSOR\n";
   for(i=0;i<n;i++)
   {  cout<<"Game "<<i+1<<"\n";
      a=g.userInput();
      b=g.AIinput();
      g.score(a,b);
   }
   g.checkwin(g.score1,g.score2);
   return 0;
}

void RPS::score(int uc,int ac)
{
    if(uc==ac)
       cout<<"\n";
    else if(uc==1)
    {   if(ac==2)
          score2++;
        else
          score1++;
    }
    else if(uc==2)
    {   if(ac==1)
           score1++;
        else
           score2++;
    }
    else
    {   if(ac==1)
          score2++;
        else
          score1++;
    }
    cout<<"\nYour Score: "<<score1;
    cout<<"\tCPU Score: "<<score2<<endl;
}

void RPS::checkwin(int user,int AI)
{   if(user==AI)
       cout<<"\nGAME DRAWS!\n";
    else if(user<AI)
       cout<<"\nCPU WINS!\n";
    else
       cout<<"\nYOU WIN!\n";
}


int RPS::AIinput()
{
    choice2=(rand()%3)+1;
    cout<<"CPU : "<<choice2;
    return choice2;
}

int Game::userInput()
{   cout<<"You : ";
    cin>>choice1;
    return choice1;
}
