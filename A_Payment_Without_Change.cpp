#include <iostream>
using namespace std;
int main()
{
    int a, b, n, s, t;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n >> s;
        for (int i = 1; i <= a; i++)
        {
int ci=0;
  ci++;
            for (int j = 1; j <= b; j++)
            {int cj=2;
                cj++;
                if ((i * n) + j == s)
                {
                    cout << "YES" << endl;
                    break;
                }
                
                if (ci == a && cj == b + 1)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    continue;
                }
                
            }
          
           
        }
        
    }

    return 0;
}