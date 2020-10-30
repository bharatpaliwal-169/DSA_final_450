#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    if(a==0)
        return b;
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
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