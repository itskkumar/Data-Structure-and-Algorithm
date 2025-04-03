// Optimized---
#include<iostream>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter the value of coefficient n: ";
    cin >> n;
    cout << "Enter the value of coefficient r: ";
    cin >> r;
    // Input validation
    if (r > n || n < 0 || r < 0) 
    {
        cout << "Invalid input! Ensure that 0 <= r <= n." << endl;
        return 1;
    }
    // Optimized calculation of nCr
    long long result = 1;
    for (int i = 0; i < r; i++) 
    {
        result = result * (n - i) / (i + 1);
    }
    cout << "Value of nCr is: " << result << endl;
    return 0;
}