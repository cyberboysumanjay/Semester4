#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int a[50],temp,n;
  int rand();
  cout<<"Enter the number of elements in array"<<"\n";
  cin>>n;
/*
for (int k=0;k<n;k++){
  cin>>a[k];
}
*/

for(int k=0;k<n;k++){

  a[k]=rand();
//  cin>>a[k];
}

for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-1-i; j++) {
      if(a[j]>a[j+1]){
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }
}

  for(int i=0;i<5;i++){
    cout <<a[i]<<" ";
  }
}
