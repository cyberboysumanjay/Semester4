//C++ Program to store and fetch user details (Name, Roll.. etc) using switch case

#include <iostream>
#include <fstream>
using namespace std;
void write()
{
    ofstream ofile;
    string roll, name, data;

    ofile.open("database.txt", ios::out | ios::app);

    cout << "Enter Roll number of user: ";
    cin >> roll;
    cout << "Enter User Name: ";
    cin >> name;
    data = roll + " " + name;
    ofile << data << endl;
    ofile.close();
}

void fetch()
{
    char data[100];
    ifstream ifile;
    ifile.open("database.txt");
    while (!ifile.eof())
    {
        ifile.getline(data, 100);
        cout << data<<"\n";
    }
    ifile.close();

}
void searchFile()
{
    ifstream ifile;
    size_t pos;
    string line,findString;
    cout<<"Enter Roll Number to fetch details: \n";
    cin>>findString;
    ifile.open("database.txt");
    if(ifile.is_open())
    {
        while(getline(ifile,line))
        {
            pos = line.find(findString);
            if(pos!=string::npos)
            {
                cout<<line<<endl;
                break;
            }
        }
    }
}

int main()
{
    cout<<"Welcome to my Mini Database!\n";
    int choice;

    do
    {
        cout << "What do you want to do?\n";
        cout << "1. Store Details" << "\t" << "2. Fetch Details" << "\t" << "3. Exit" << "\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            write();
            break;
        case 2:
            searchFile();
            break;
        case 3:
            cout << "Exiting!..." < "\n";
            break;
        }
    }
    while (choice != 3);
}
