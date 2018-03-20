#include<iostream>
using namespace std;

class A {
int x,y;
public:
    void setValue(int a, int b){
    x=a;
    y=b;
    }

    A operator + (A x1){
        A x2;
        x2.x= x+x1.x;
        x2.y= y+x1.y;
        return x2;
    }

    void print(A x3){
    cout<<x3.x <<" and "<<x3.y;
    }
};

int main(){
A a,b,c;
a.setValue(2,3);
b.setValue(4,5);
c=a+b;
c.print(c);
}
