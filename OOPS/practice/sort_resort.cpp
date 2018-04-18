#include <iostream>
using namespace std;
class p
{
public:
    int i, j, temp;
    virtual int * sort(int a[], int n)
    {
        for (i = 1; i < n; i++)
        {
            temp = a[i];
            j = i - 1;
            while (( a[j]<temp ) && (j >= 0))
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = temp;
        }
std::cout << "Sorted Array is: "<<"\n";
        for (i = 0; i < n; i++)
        {
            std::cout << a[i] << " ";
        }
    }
};

class q
{
public:
    int i,j, k, temp;
    virtual int * resort(int a[], int n)
    {

   for(i=0,j=n-1;i<n/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<"\nReverse array is: "<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
    }
};

int main()
{   cout<<"Roll number: 161210040"<<"\n";
    int n = 5;
    int a[5] =
    {
        8,
        1,
        4,
        6,
        3
    };
    p p1;
    q q1;
    p1.sort(a, n);
    q1.resort(a, n);
}
