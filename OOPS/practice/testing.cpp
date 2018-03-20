#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class TTT
{
public:
    int a[10],choice2,score1,score2;
    int AIinput();
    void score();
    void checkwin(int,int);
    void show();
};


int TTT::AIinput()
{
    int i;
    do
    {
        choice2=(rand()%9)+1;
        i=choice2;
    }
    while((a[i]==20) || (a[i]==10));

    cout«"CPU : "<< i<< "\n";
    a[i]=20;
    return choice2;
}
void TTT::score()
{
    if(a[1]==a[2] && a[2]==a[3])
    {
        if(a[1]==10)
            score1++;
        else
            score2++;
    }
    else if(a[1]==a[4] && a[4]==a[7])
    {
        if(a[1]==10)
            score1++;
        else
            score2++;
    }
    else if(a[1]==a[5] && a[5]==a[9])
    {
        if(a[1]==10)
            score1++;
        else
            score2++;
    }
    else if(a[2]==a[8] && a[8]==a[5])
    {
        if(a[2]==10)
            score1++;
        else
            score2++;
    }
    else if(a[3]==a[6] && a[6]==a[9])
    {
        if(a[3]==10)
            score1++;
        else
            score2++;
    }
    else if(a[3]==a[5] && a[5]==a[7])
    {
        if(a[3]==10)
            score1++;
        else
            score2++;
    }
    else if(a[4]==a[5] && a[5]==a[6])
    {
        if(a[4]==10)
            score1++;
        else
            score2++;
    }
    else if(a[7]==a[8] && a[8]==a[9])
    {
        if(a[7]==10)
            score1++;
        else
            score2++;
    }
}


void TTT::checkwin(int user,int AI)
{
    if(user==AI)
        cout<<"\nGAME DRAWS!\n";
    else if(user<AI)
        cout<<"\nCPU WINS!\n";
    else
        cout<<"\nYOU WIN!\n";
}

void TTT::show()
{
    int j=1;
    while(j<=9)
    {
        if(a[j]==10)
            cout<<" o ";
        else if(a[j]==20)
            cout<<" x ";
        else
            cout<<" _ ";

        if(j%3==0)
            cout<<"\n";

        j++;
    }
}


class Game:public TTT
{
  public:
    int choice1;
    int userInput();
};

int Game::userInput()
{
    cout<<"You : ";
    cin>>choice1;
    if((a[choice1]==10)||(a[choice1]==20))
     cout<<"Already occupied!";

    a[choice1]=10;
    return choice1;
}



