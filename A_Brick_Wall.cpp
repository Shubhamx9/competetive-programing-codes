#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int m, n;

        cin >> n >> m;
        cout << (m / 2) * n << endl;
    }

    return 0;
}