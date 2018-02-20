#include<iostream>
using namespace std;
class area
{
private:
 int len,brea;
public:
 area(int l=5,int b=1)
 {
 len=l;
 brea=b;
 }
int are()
 {
 return (len*brea);
 }
void display()
 {
 cout<<are()<<endl;
 }
};
int main()
{
area a1(10,20);
a1.display();
}
