#include<bits/stdc++.h>
using namespace std;
// Dynamic Programming
class Fibo_series{
    public:
        int fibo(int n)
        {
            int f[n+2];
            int i;
            f[0] = 0; 
            f[1] = 1;
            for(i=2;i<=n;i++)
            {
                f[i] = f[i-1] + f[i-2];
            }
            return f[n];
        }
};
int main()
{
    Fibo_series fab;
    int n;
    cout << "Enter the nth position for fibonacci series : \n";
    cin >> n;
    cout << fab.fibo(n) << endl;
}
