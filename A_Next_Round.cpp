#include <iostream>
using namespace std;
int main()
{
    int x, y, g = 0;
    cin >> x >> y;
    int s[x];
    for (int i = 0; i < x; i++)
    {
        cin >>  s[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (s[i] >= s[y-1] && s[i] > 0)
        {
            g++;
        }
    }
    cout << g<<endl;
    return 0;
}