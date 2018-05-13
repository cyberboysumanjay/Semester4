#include <iostream>
#include <fstream>
using namespace std;

struct stud
{  int rno;
   char name[20];
}s;

void add()
{ int ch=1;
  ofstream f;
  f.open("data.txt",ios::app|ios::out);
  do
  {  cout<<"\nEnter Roll No. : ";
     cin>>s.rno;
     cout<<"\nEnter Name :";
     cin>>s.name;
     f<<s.rno<<" "<<s.name<<"\n";
     cout<<"Want to enter more data?(1/0)";
     cin>>ch;
  }while(ch==1);
  f.close();
}

void fetch()
{
  int ch=1,r;
  ifstream f1;
  f1.open("data.txt",ios::in);
  do
  {  cout<<"\nEnter Roll No. : ";
     cin>>r;
     while(!f1.eof())
    {    f1.read((char*)&s,sizeof(s));
        if(r==s.rno)
              cout<<s.rno<<" "<<s.name<<"\n";
        else
              cout<<"Not Found!!\n";
    }
     cout<<"Want to fetch more data?(1/0)";
     cin>>ch;

  }while(ch==1);
  f1.close();
}
int main()
{
  int ch;
  cout<<"Roll No. 161210025\n";
  while(ch!=3)
 { cout<<"1.Add  2.Fetch  3.Exit\n";
   cin>>ch;
   switch(ch)
   {
       case 1: add();
               break;
       case 2: fetch();
               break;
       case 3: break;
       default: cout<<"Wrong choice!!";
                break;
   }
 }
  return 0;
}
