#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        long long a, b, a2 = 0, b2 = 0;
        cin >> a >> b;

        if (a % 2 != 0 && b % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }

        if (a % 2 == 0)
        {
            a2 = a / 2;
            b2 = b * 2;

            if (a + b != a2 + b2)
            {
                cout << "Yes" << endl;
                continue;
            }
        }

        if (b % 2 == 0)
        {
            a2 = a * 2;
            b2 = b / 2;

            if (a + b != a2 + b2)
            {
                cout << "Yes" << endl;
                continue;
            }
        }

        cout << "No" << endl;
    }

    return 0;
}