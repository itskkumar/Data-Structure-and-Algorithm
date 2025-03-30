#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4,num=1;
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