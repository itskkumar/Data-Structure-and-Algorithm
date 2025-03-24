#include<iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    bubblesort(a,n-1);
}
int main()
{
    int a[5]={5,3,2,4,1},n=5;
    bubblesort(a,n);
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}