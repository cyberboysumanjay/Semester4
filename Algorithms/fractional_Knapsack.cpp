#include<iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;

    else if (wt[n-1] > W)
        return knapSack(W, wt, val, n-1);

    else
        return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),knapSack(W, wt, val, n-1));
}
int main()
{
    int W;
    int val[3],wt[3];

    cout<<"Roll Number 161210040\n";
    cout<<"Enter Maximum allowed weight: \n";
    cin>>W;

    cout<<"Enter the value of items\n";
    for (int i=0; i<3; i++)
    {
        cin>>val[i];
    }
    cout<<"Enter the weight of items\n";
    for (int i=0; i<3; i++)
    {
        cin>>wt[i];
    }

    int n = sizeof(val)/sizeof(val[0]);
    cout<< "Maximum Profit: " <<knapSack(W, wt, val, n);

}
