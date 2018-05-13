#include<iostream>
using namespace std;
void truncate(float a[],int n){
   for (int i=0;i<n;i++){
    cout<<a[i];
   }
}

int main(){
float k,a[50],n;
cout<<"Roll no. 161210014\n";
cout<<"Enter the no. of digits in your number:";
cin>>k;
cout<<"Enter the array of numbers:";
for(int i=0;i<k;i++){
cin>>a[i];
}
cout<<"Enter the no. of significant digits you want to truncate to:";
cin>>n;
truncate(a,n);
return 0;
}
