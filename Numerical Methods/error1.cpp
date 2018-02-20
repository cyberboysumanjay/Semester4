#include <iostream>
#include <iomanip>
using namespace std;
int k,n;
void roundOff(double num,int n){

   cout << "The rounded off no. is:"<<setprecision(n) << fixed <<  num << '\n';

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
  cout<<"161210040"<<"\n";
  cout<<"Your number is a:\n"<<"1.Integer\n"<<"2.Decimal\n";
  cout<<"Enter your choice:";
  cin>>k;
  switch(k){
  case 1:cout<<"Enter the no. of digits in your number:";
cin>>k;
cout<<"Enter the array of numbers:";
for(int i=0;i<k;i++){
cin>>a[i];
}
cout<<"Enter the no. of significant digits you want to round off to:";
cin>>n;
roundoffint(a,n);
break;

case 2:
   cout<< "Enter the number:";
   cin>>num;
   cout<<"Enter the no. of the significant digits after decimal point:";
   cin>>n;
   roundOff(num,n);
  }
  return 0;
}
