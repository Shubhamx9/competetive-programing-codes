#include <iostream>
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}
using namespace std;
int main()
{
    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b % a == 0)
        {
            cout << b * (b / a) << endl;
        }
        else
        {
            cout << lcm(a, b) << endl;
        }
    }
    return 0;
}