#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int so, sop;
    cin >> so >> sop;
    if (x == 1)
    {
        if (so == sop)
        {
            cout << "1"<<endl;
            cout << so << ":" << sop<<endl;
        }
        if (so != sop)
        {
            cout << "0"<<endl;
            cout << so << ":" << sop<<endl;
        }
    }
    if (x > 1)
    {
        if (so > x || sop > x)
        {
            cout << "0"<<endl;
        }
        if (so < x && sop < x)
        {
            if ((so + sop) < x)
            {
                cout << x - (so + sop)<<endl;
            }
            if ((so + sop) >= x)
            {
                cout << "0"<<endl;
            }
        }
    }

    return 0;
}