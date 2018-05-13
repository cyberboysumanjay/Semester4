 #include<iostream>
#include<fstream>
using namespace std;
class Database
{
    char name[50];
    int roll_no;
    char email[30];
  public:
      void enterdata()
      {
          cout<<" Enter roll no. : ";
          cin>>roll_no;
          cout<<" Enter name : ";
          cin>>name;
          cout<<" Enter email id : ";
          cin>>email;
      }
      void disp()
      {
          cout<<" The details are : ";
          cout<<"\n Roll no. : "<<roll_no;
          cout<<"\n Name : "<<name;
          cout<<"\n Email id :"<<email;
      }
      int rollNo()
      {
          return roll_no;
      }
};

void write_data()
{
    ofstream obj;
    obj.open("DB.txt",ios::binary | ios::app);
    Database d;
    d.enterdata();

    obj.write((char*)&d, sizeof(d));
    obj.close();
}

void find_data(int n)
{
    ifstream ob;
    ob.open("DB.txt",ios::binary);
    Database d;
    while(ob.read((char*)&d,sizeof(d)))
    {
        if(d.rollNo()==n)
        {
            d.disp();
        }
    }
    ob.close();
}

int main()
{
     int n,m,r;
  cout<<" 1. To insert data into file "<<endl;
  cout<<" 2. To find data from file "<<endl;
  cout<<" enter your choice ";
  cin>>n;
  switch(n)
  {
   case 1: cout<<" How many data you want to enter ";
           cin>>m;
           for(int i=0;i<m;i++)
           {
               write_data();
           }
           break;
   case 2: cout<<" Enter roll no. ";
           cin>>r;
           find_data(r);
           break;
   default : cout<<" wrong choice entered ";
  }
  cout<<endl<<"161210007";

    return 0;
