// Euclidean algorithm . 
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    
    return gcd(b,a % b);
}
int main()
{
    int a,b;
    cout << "Enter the value of a and b :\n";
    cout << "A : " ;
    cin >> a;
    cout << '\n';
    cout << "B : ";
    cin >> b;
    cout << "GCD of "<< a <<" and " <<  b  << " is : "  << gcd(a,b)<< endl;
    return 0;
}