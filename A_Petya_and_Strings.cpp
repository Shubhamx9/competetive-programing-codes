/*#include <iostream>

using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    long long a = 0, b = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int m = 0;
        int c = 0;
        if (int(s[i]) < 97)
        {
            c = int(s[i]) + 32;
            m = int(s[i]);
        }
        a = a + int(s[i]) + c - m;
    }
    for (int i = 0; i < p.length(); i++)
    {
        int cc = 0;
        int c = 0;
        if (int(p[i]) < 97)
        {
            c = int(p[i]) + 32;
            cc = int(p[i]);
        }
        b = b + c + int(p[i]) - cc;
    }
    if (a > b)
    {
        cout << "1";
    }
    if (a < b)
    {
        cout << "-1";
    }
    if (a == b)
    {
        cout << 0;
    }

    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    string s, p;
    int m = 0, k = 0, flag = 1;
    cin >> s >> p;
    for (int i = 0; i < s.length(); i++)
    {
        flag++;

        if (int(s[i]) < 97)
        {
            m = int(s[i]) + 32;
        }
        if (int(s[i]) >= 97)
        {
            m = int(s[i]);
        }
        if (int(p[i]) < 97)
        {
            k = int(p[i]) + 32;
        }
        if (int(p[i]) >= 97)
        {
            k = int(p[i]);
        }
        if (m > k)
        {
            cout << 1;
            break;
        }
        if (m < k)
        {
            cout << -1;
            break;
        }
        if (m == k)
        {   if (flag == s.length()+1 )
    {
        cout << 0;
    }
            continue;
        }
      
    }
   

    
    return 0;
}