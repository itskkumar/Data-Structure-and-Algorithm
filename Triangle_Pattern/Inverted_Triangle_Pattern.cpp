#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}