#include<iostream>
using namespace std;
int main()
{
    int i,j,n,num=1;
    cout<<"Enter the size of row:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        num++;
    }
}