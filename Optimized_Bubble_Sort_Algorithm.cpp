#include<iostream>
using namespace std;
int main()
{
    int n,temp,i;
    cout<<"Enter the size of Array:\n";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element:\n";
        cin>>a[i];
    }
    bool swapped;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}