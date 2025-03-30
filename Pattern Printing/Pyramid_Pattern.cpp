#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the size of row:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i+1;k++)
        {
            cout<<k;
        }
        for(k=i;k>0;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
}