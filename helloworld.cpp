#include<iostream>
using namespace std;
int main()
{
  int a[]={3,7,1,9,4},temp;

  //cout<<"hello"<<a;
  //return 0;
for (int i = 0; i < 4; i++) {
  for (int j = 0; j < 4-i; j++) {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
  }
}
for(i=0;i<5;i++){
  cout << "Sorted Array: " << a[i]'\n';
}

}
