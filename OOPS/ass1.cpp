#include <iostream>
#include <conio.h>
using namespace std;

class Time
{
	int hrs,mins;
	public:
        Time(int);
		void display();
};

Time :: Time(int t)

{
	hrs=t/60;
	mins=t%60;
}

void Time::display()
{
	cout<<hrs<< " Hour(s)" <<endl;
	cout<<mins<< " Minute(s)" <<endl;
}

int main()
{
	int d1;
	cout<<"Basic Type to Class Type Conversion: "<<endl;
	cout<<"Enter time duration in minutes : ";
    cin>>d1;

	Time t1=d1;
	t1.display();
	return 0;
}
