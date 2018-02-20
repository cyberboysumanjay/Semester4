#include <iostream>
#include <iomanip>
using namespace std;
int k,n;
void roundOff(double num,int n){

   cout << "the rounded off no. is:"<<setprecision(n) << fixed <<  num << '\n'; //Outputs 12.457

   }

void roundoffint(int a[],int n){
 int sum=0;
  if(a[n]>5)
    a[n-1]+=1;
  else if(a[n]=5){
    if(a[n-1]%2!=0){
      a[n-1]+=1;
    }
  }
   for (int i=0;i<n;i++){
    sum=sum*10+a[i];
   }
   cout<<sum<<"*10^"<<(k-n);
}
int main(){
  double num;
  int a[50];
  cout<<"your number is:\n"<<"1.integer\n"<<"2.decimal\n"<<"your choice is:";
  cin>>k;
  switch(k){
  case 1:cout<<"enter the no. of digits in your number:";
cin>>k;
cout<<"enter the array of numbers:";
for(int i=0;i<k;i++){
cin>>a[i];
}
cout<<"enter the no. of significant digits you want to round off to:";
cin>>n;
roundoffint(a,n);
break;

case 2:
   cout<< "enter the number:";
   cin>>num;
   cout<<"enter the no. of the significant digits after decimal point:";
   cin>>n;
   roundOff(num,n);
  }
  return 0;
}
