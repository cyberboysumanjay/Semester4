#include <iostream>
class Complex{
  int real,imag;

public:
  Complex(int r=0, int i=0){
    real=r;
    imag=i;
  }

  Complex operator * (Complex c3){
    Complex c4;
    c4.real=real*c3.real-imag*c3.imag;
    c4.imag=imag*c3.real+real*c3.imag;
    return c4;
  }

  void print(){
    std::cout <<real<<"+i"<<imag << '\n';
  }
  void productPrint(){
    std::cout << "Product of Complex Numbers: " <<real<<"+i"<<imag << '\n';
  }
};

int main (){
  Complex c7(2,3),c8(10,5),c9,c10;
  std::cout <<"Roll No. 161210040"<<"\n" <<"Entered Complex Numbers are: " << '\n';
  c7.print();
  c8.print();
  c9=c7*c8;
  c9.productPrint();

}
