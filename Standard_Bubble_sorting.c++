//Bubble sort ----
#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;
    int a[n];
// Taking Input---
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element: "<<endl;
        cin>>a[i];
    }
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
cout<<"Sorted Array is:-"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
