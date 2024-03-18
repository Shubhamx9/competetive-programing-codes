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
        string ar;
        cin >> ar;
        for (size_t i = 0; i < y; i++)
        {
            if (ar[i] == 'm' && ar[i + 1] == 'a' && ar[i + 2] == 'p')
            {

                count++;
                if (ar[i+3]=='i')
                {
                   i=i+3;
                }
                
            }
            if (ar[i] == 'p' && ar[i + 1] == 'i' && ar[i + 2] == 'e')
            {

                count++;
            }

        }
            cout << count << endl;
    }
        return 0;
    }