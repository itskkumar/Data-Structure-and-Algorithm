#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}