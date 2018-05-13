#include<iostream>
using namespace std;

int LS(int ar[],int size,int val)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(ar[i]==val)
            return i;
    }
            return -1;
}
int main()
{
   int a[50],n,i,val,index;
   cout<<"Roll No. 161210040"<<endl;
   cout<<"No. of elements: ";
   cin>>n;
   cout<<"Enter elements\n";
   for(i=0;i<n;i++)
      cin>>a[i];
   cout<<"You want to search for : ";
   cin>>val;
   index=LS(a,n,val);
   if(index==-1)
      cout<<"Not found!!";
   else
      cout<<val<<" is present at index "<<index+1;
   return 0;
}
