//Bubble sort ----
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,3,2,5,4},i,n=5,j,temp;
    cout<<"Sorted Array"<<endl;
//Algorithm---
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
//Output---
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}