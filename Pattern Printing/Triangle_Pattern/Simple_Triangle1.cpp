#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the size of row:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}