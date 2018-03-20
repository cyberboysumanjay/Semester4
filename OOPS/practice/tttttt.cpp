#include <iostream>
#include <cstdlib>
#include<ctime>

using namespace std;

class TTT
{
 public:
    int a[10],choice2,score1,score2;
    TTT()
    {  score1=score2=0;
       for(int i=0;i<10;i++)
           a[i]=i;
    }
    int AIinput();
    void score();
    void checkwin(int,int);
    void show();
};

int TTT::AIinput()
{   int i;
    do
    {   choice2=(rand()%9)+1;
        i=choice2;
    }while((a[i]==20) || (a[i]==10));

    cout<<"CPU move: "<<choice2<<endl;
    a[i]=20;
    return choice2;
}
void TTT::score()
{
    if(a[1]==a[2] && a[2]==a[3])
    {  if(a[1]==10)
          score1++;
       else
          score2++;
    }
    else if(a[1]==a[4] && a[4]==a[7])
    {  if(a[1]==10)
          score1++;
       else
          score2++;
    }
    else if(a[1]==a[5] && a[5]==a[9])
    {  if(a[1]==10)
          score1++;
       else
          score2++;
    }
    else if(a[2]==a[8] && a[8]==a[5])
    {  if(a[2]==10)
          score1++;
       else
          score2++;
    }
    else if(a[3]==a[6] && a[6]==a[9])
    {  if(a[3]==10)
          score1++;
       else
          score2++;
    }
    else if(a[3]==a[5] && a[5]==a[7])
    {  if(a[3]==10)
          score1++;
       else
          score2++;
    }
     else if(a[4]==a[5] && a[5]==a[6])
    {  if(a[4]==10)
          score1++;
       else
          score2++;
    }
    else if(a[7]==a[8] && a[8]==a[9])
    {  if(a[7]==10)
          score1++;
       else
          score2++;
    }
}

void TTT::checkwin(int user,int AI)
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
}

class Game:public TTT
{
  public:
    int choice1;
    int userInput();
};

int Game::userInput()
{   cout<<"Your move : ";
    cin>>choice1;
    if((a[choice1]==10)||(a[choice1]==20))
    { cout<<"Already occupied!";
    }
    a[choice1]=10;
    return choice1;
}


int main()
{  srand(time(0));
   Game g1;
   cout<<"Roll No. 161210040\n";
   cout<<"Tic Tac Toe\n";

   int j,m=1,k,ch=5;
   while(ch!=1 && m<=5)
   {   if(m==5)
         ch=1;
       j=g1.userInput();
       m++;
       k=g1.AIinput();
       g1.show();
       g1.score();
       if(g1.score1>g1.score2)
         ch=g1.score1;
       else if(g1.score1<g1.score2)
         ch=g1.score2;

   }

   g1.checkwin(g1.score1,g1.score2);
   g1.show();
   return 0;
}
