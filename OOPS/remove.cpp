#include<iostream>
using namespace std;
int  main()
{
    int size, arr[50], i, j, temp;

    cout<<"Roll No. 161210040\n";
    cout<<"Enter Array Size : ";
    cin>>size;
    cout<<"Enter Array Elements : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<size; i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j]) && (j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted Array : \n";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
