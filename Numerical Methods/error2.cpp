#include<iostream>
using namespace std;
int main(){
int n;
double n1,n2;

cout<<"Roll no. 161210014\n";
cout<<"Enter the true value:\n";
cin>>n1;
cout<<"Enter the truncated or rounded off value:\n";
cin>>n2;
cout<<"Enter your choice:\n"<<"1.Absolute Error\n"<<"2.Relative Error\n"<<"3.Percentage Error\n"<<"4.Exit\n";
do{
cin>>n;
switch(n){
case 1:cout<<"Absolute error is:"<<n1-n2<<'\n';break;
case 2:cout<<"Relative error is:"<<(n1-n2)/n1<<'\n';break;
case 3:cout<<"Percentage error is:"<<((n1-n2)/n1)*100<<'\n';break;
case 4:cout<<"Exiting..";break;
}
}while(n!=4);
return 0;
}
