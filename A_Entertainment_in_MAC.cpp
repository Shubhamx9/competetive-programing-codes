#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
     
    int x;
    cin >> x;
    while (x--)
    {int y;
        cin >> y;
        string s;
        cin >> s;
        string r = s;
        reverse(r.begin(), r.end());
        if (r < s)
        {
            cout << r << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
