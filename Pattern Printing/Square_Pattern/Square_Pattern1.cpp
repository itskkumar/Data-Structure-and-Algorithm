#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the size of row/column:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}