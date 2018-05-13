#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int words=0,size=0;
    ifstream file;
    char ch;
    file.open("details.txt",ios::in);
    while(!file.eof())
    {
        file.get(ch);
        if(ch==' '||ch=='\n')
            words++;
        size++;
    }
    cout<<"Roll No. 161210040\n";
    cout<<"Number of Words = "<<words+1<<endl;
    cout<<"Size of file has "<<size<<" characters";
    file.close();
    return 0;
}
