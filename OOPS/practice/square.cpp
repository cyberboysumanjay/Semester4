#include<iostream>
#include <math.h>

class Convert{
private:
  float length;
public:

  Convert(float len=0){
      length=len;
  }

   friend float inchToCm(Convert obj1);
   friend float cmToInch(Convert obj1);
   friend float milesToKm(Convert obj1);
   friend float kmToMiles(Convert obj1);
};

float inchToCm(Convert obj1){
  return 2.54*obj1.length;
}

float cmToInch(Convert obj1) {
 return obj1.length/2.54;
}

float milesToKm(Convert obj1){
  return 1.6*obj1.length;
}

float kmToMiles(Convert obj1){
  return obj1.length/1.6;
}

int main(){
  std::cout << "Roll No. 161210040" << '\n';
  float len;
  std::cout << "Input value of length: " << '\n';
  std::cin >> len;
  Convert obj1(len);

  int choice;

do{
  std::cout << "Which conversion would you like to make: " << '\n';
  std::cout << "1. Inch to Cm\t"<<"2. Cm to Inch\t" <<"3. Miles to Km\t"<<"4. Km to Miles\t""5. Exit" << '\n';

  std::cin >> choice;
     switch (choice) {
    case 1: std::cout << inchToCm(obj1) << '\n'; break;
    case 2: std::cout << cmToInch(obj1) << '\n'; break;
    case 3: std::cout << milesToKm(obj1)<< '\n'; break;
    case 4: std::cout << kmToMiles(obj1)<< '\n'; break;
    case 5: std::cout << "Exiting...." << '\n';break;
   }
}
while(choice!=5);

  return 0;


}
