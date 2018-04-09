#include <iostream>
#include <cstdlib>
#include<ctime>
#include<stdlib.h>
using namespace std;

class RPS
{
 public:
    int choice2,ac;
    int scoreR1,scoreR2;
     RPS()
     {  scoreR1=scoreR2=0;
     }
    int AIinput1();
    void scoreR(int,int);
    void checkwin1(int,int);
};

class TTT
{
 public:
    int a[10],choice2,scoreT1,scoreT2;
    TTT()
    {  scoreT1=scoreT2=0;
       for(int i=0;i<10;i++)
           a[i]=i;
    }
    int AIinput2();
    void scoreT();
    void checkwin2(int,int);
    void show();
};

class Game:public RPS,public TTT
{
  public:
    int choice1,uc;
    int userInput1();
    int userInput2();
};

int main()
{  system("color F0");
   srand(time(0));
   Game g;
   cout<<"Roll No. 161210040\n";
   int choice;
   cout<<"Which game do you want to play?";
   cout<<"\n1. Rock Paper Scissor       2.Tic Tac Toe\n";
   cin>>choice;
   switch(choice)
   {
       case 1: int a,b,i,n;
               cout<<"How many games you want to play? ";
               cin>>n;
               cout<<"\n1.ROCK      2.PAPER       3.SCISSOR\n";
               for(i=0;i<n;i++)
               {  cout<<"Game "<<i+1<<"\n";
                  a=g.userInput1();
                  b=g.AIinput1();
                  g.scoreR(a,b);
               }
               g.checkwin1(g.scoreR1,g.scoreR2);
               break;
       case 2:  int ch,m,j,k;
                ch=5;
                m=1;
                while(ch!=1 && m<=5)
                {   if(m==5)
                       ch=1;
                    j=g.userInput2();
                    m++;
                    k=g.AIinput2();
                    g.show();
                    g.scoreT();
                    if(g.scoreT1>g.scoreT2)
                       ch=g.scoreT1;
                    else if(g.scoreT1<g.scoreT2)
                            ch=g.scoreT2;

                }
                g.checkwin2(g.scoreT1,g.scoreT2);
                break;

       default: cout<<"\nWrong Choice";
                break;
   }

   return 0;
}

void RPS::scoreR(int uc,int ac)
{
    if(uc==ac)
       cout<<"";
    else if(uc==1)
    {   if(ac==2)
          scoreR2++;
        else
          scoreR1++;
    }
    else if(uc==2)
    {   if(ac==1)
           scoreR1++;
        else
           scoreR2++;
    }
    else
    {   if(ac==1)
          scoreR2++;
        else
          scoreR1++;
    }
    cout<<"\nYour Score: "<<scoreR1;
    cout<<"\tCPU Score: "<<scoreR2<<endl;
}

void RPS::checkwin1(int user,int AI)
{   if(user==AI)
       cout<<"\nGAME DRAWS!\n";
    else if(user<AI)
       cout<<"\nCPU WINS!\n";
    else
       cout<<"\nYOU WIN!\n";
}


int RPS::AIinput1()
{
    choice2=(rand()%3)+1;
    cout<<"CPU : "<<choice2;
    return choice2;
}

int Game::userInput1()
{   cout<<"You : ";
    cin>>choice1;
    return choice1;
}

int TTT::AIinput2()
{   int i;
    do
    {   choice2=(rand()%9)+1;
        i=choice2;
    }while((a[i]==20) || (a[i]==10));

    cout<<"CPU : "<<choice2<<endl;
    a[i]=20;
    return choice2;
}
void TTT::scoreT()
{
    if(a[1]==a[2] && a[2]==a[3])
    {  if(a[1]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[1]==a[4] && a[4]==a[7])
    {  if(a[1]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[1]==a[5] && a[5]==a[9])
    {  if(a[1]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[2]==a[8] && a[8]==a[5])
    {  if(a[2]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[3]==a[6] && a[6]==a[9])
    {  if(a[3]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[3]==a[5] && a[5]==a[7])
    {  if(a[3]==10)
          scoreT1++;
       else
          scoreT2++;
    }
     else if(a[4]==a[5] && a[5]==a[6])
    {  if(a[4]==10)
          scoreT1++;
       else
          scoreT2++;
    }
    else if(a[7]==a[8] && a[8]==a[9])
    {  if(a[7]==10)
          scoreT1++;
       else
          scoreT2++;
    }
}

void TTT::checkwin2(int user,int AI)
{   if(user==AI)
       cout<<"\nGAME DRAWS!\n";
    else if(user<AI)
       cout<<"\nCPU WINS!\n";
    else
       cout<<"\nYOU WIN!\n";
}

void TTT::show()
{   int i=1;
    while(i<=9)
    {
          if(a[i]==10)
             cout<<" o ";
          else if(a[i]==20)
             cout<<" x ";
          else
             cout<<" _ ";

           if(i%3==0)
             cout<<"\n";

          i++;
    }
    cout<<endl;
}
int Game::userInput2()
{   cout<<"You : ";
    cin>>choice1;
    while((a[choice1]==10)||(a[choice1]==20))
    { cout<<"Already occupied!\n";
      cout<<"Enter Again : ";
      cin>>choice1;
    }
    a[choice1]=10;
    return choice1;
}
