//Unoptimized---
#include<iostream>
using namespace std;
int main()
{
    int i,fact1=1,fact2=1,fact3=1,d,result,n,r;
    cout<<"Enter the value of cofficient n: "<<endl;
    cin>>n;
    cout<<"Enter the value of cofficient r: "<<endl;
    cin>>r;
    // Algo---
    d=(n-r);
    for(i=n;i>0;i--)
    {
        fact1=fact1*i;
    }
    for(i=r;i>0;i--)
    {
        fact2=fact2*i;
    }
    for(i=d;i>0;i--)
    {
        fact3=fact3*i;
    }
    result=fact1/(fact2*fact3);
    cout<<"Value of nCr is : "<<result<<endl;
    return 0;
}