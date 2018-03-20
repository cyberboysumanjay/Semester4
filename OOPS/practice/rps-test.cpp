#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class rps
{
public:
    int p1=0,botscore=0,tiescore=0,choice;
    int ai;
public:
    int  botmove()
    {
        srand (time(NULL));
        ai=rand()%3+1;
        return ai;
    }

    void printinstruction()
    {
        cout << "Welcome to Rock Paper Scissors Game!" << endl;
        cout << "1. Rock\t"<<" 2. Paper\t"<<"3. Scissors" << endl;
    }
    void checkwin(int choice,int ai)
    {
        if(choice== ai)
        {
            cout << "Its a tie!" << endl;
            tiescore++;
        }
        else if(choice ==1 && ai== 2 || (choice == 2 && ai == 3) || ( choice == 3 && ai == 1))
        {
            cout << "AI wins!" << endl;
            botscore++;

        }
        else if((choice == 1 && ai == 3) || (choice == 2 && ai == 1) || ( choice == 3 && ai == 2))
        {
            cout << "You win!" << endl;
            p1++;
        }
        else
        {
            cout << "Wrong move!" << endl;
        }
    }
    void updatescore()
    {
        cout<<"Human score:  "<<p1<<endl;
        cout<<"AI score:  "<<botscore<<endl;
        cout<<"Ties:   "<<tiescore<<"\n";
    }

};
class game : public rps
{
public:
    int choice;

public:
    int userinput()
    {
        cout<<"Enter your Move"<<endl;
        cin>> choice;
        return choice;
    }
};
int main()
{
    game a;
    cout<<"Roll no. 161210040\n";
    while(a.p1<=a.botscore)
    {
        int p=a.botmove();
        a.printinstruction();
        int w=a.userinput();
        a.checkwin(w,p);
        a.updatescore();
    }
    return 0;
}
