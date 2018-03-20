#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;
// starting main function
int main()
{
    char ch;
    int humanScore = 0;
    int Ties = 0;
    int AIScore = 0;
    do
    {
        int choice;
        cout << "--------------------------------------" << endl;
        cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << endl;
        cin >> choice;
        // starts possible outcome sequence in rock paper scissors there are 9 possible out comes 3 wins 3 ties and 3 losses.
        if(choice == 1 && ai == 1)
        {
            cout << "Rock meets Rock its a Tie!" << endl;
            Ties++;
        }
        else if(choice ==1 && ai== 2)
        {
            cout << "Rock is covered by Paper the computer wins!." << endl;
            AIScore++;
        }
        else if(choice == 1 && ai == 3)
        {
            cout << "Rock crushes Scissors you humanScore!" << endl;
            humanScore++;
        }
        else if(choice == 2 && ai == 1)
        {
            cout << "Paper covers Rock you humanScore!" << endl;
            humanScore++;
        }
        else if(choice == 2 && ai == 2)
        {
            cout << "Paper meets Paper its a Tie!" << endl;
            Ties++;
        }
        else if(choice == 2 && ai == 3)
        {
            cout << "Paper is cut by Scissors the computer wins!" << endl;
            AIScore++;
        }
        else if( choice == 3 && ai == 1)
        {
            cout << "Scissors are crushed by Rock computer wins!" << endl;
            AIScore++;
        }
        else if( choice == 3 && ai == 2)
        {
            cout << "Scissors cuts Paper you humanScore!" << endl;
            humanScore++;
        }
        else if(choice == 3 && ai == 3)
        {
            cout << "Scissors meet Scissors its a Tie!" << endl;
            Ties++;
        }
        else
        {
            cout << "You didn't select 1, 2, or 3" << endl;
        }
        cout << "Wins: " << humanScore << endl;
        cout << "Ties:" << Ties << endl;
        cout << "Losses:" << AIScore << endl;
        if (humanScore<AIScore)
        {
            cout << "Would you like to play again? Y/N" << endl;
        }
        cin >> ch;
        system("CLS");
    }
    while(ch == 'Y' || ch == 'y');
    return 0;

}
