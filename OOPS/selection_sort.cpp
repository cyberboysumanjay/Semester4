#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  int a[50],temp,n,s;
  cout<<"161210040\n";
  cout<<"Enter the number of elements in array"<<"\n";
  cin>>n;

for (int k=0;k<n;k++){
  cin>>a[k];
}

for (int i=0;i<n;i++){
  int small=a[i];
			for (int j=i;j<n;j++){
        if(a[i]>a[j]){
          small=a[j];
        }
			}
}

  for(int i=0;i<n;i++){
    cout <<a[i]<<" ";
  }
}
