#include<iostream>
#include <math.h>

class Complex{
private:
  int real,imag;
public:
  Complex(int r=0, int i=0){
    real=r;
    imag=i;
  }
  Complex operator * (Complex C4){
    Complex res;
    res.real =real*C4.real - imag* C4.imag;
    res.imag =real*C4.imag + imag*C4.real;
    return res;
  }

  Complex operator + (Complex C5){
    Complex res;
    res.real =real+C5.real;
    res.imag =imag+ C5.imag;
    return res;
  }
  void print() {
    std::cout << "Complex number output\n"<<real<<"+i"<<imag << '\n';
  }
};

int main(){
  Complex C1(2,3),C2(10,5);
  Complex C3=C1+C2;
  C3.print();
  Complex C5=C1*C2;
  C5.print();

}
