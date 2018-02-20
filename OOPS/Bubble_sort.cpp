#include<iostream>
using namespace std;
int main(){
int a[50],n,i,j,temp,sm,pos;
cout<<"Roll no: 161210040\n";
cout<<"Enter no. of elements in array:\n";
cin>>n;
cout<<"Enter elements of array\n";
  for(i=0;i<n;i++)
     cin>>a[i];
  for(i=0;i<n;i++)
  {   for(j=0;j<(n-1)-i;j++)
      {   if(a[j]>a[j+1])
          { temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
      }
  }
  cout<<"Sorted array\n";
  for(i=0;i<n;i++)
      cout<<a[i]<<" ";
  cout<<"\n";
  return 0;
}


