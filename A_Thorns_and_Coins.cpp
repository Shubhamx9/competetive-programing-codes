#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y, count = 0;
        cin >> y;
        string s;
        for (int i = 0; i < y; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < y ; i++)
        {
            if (s[i] == '*' && s[i + 1] == '*')
            {
                break;
            }
            if (s[i] == '@')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}