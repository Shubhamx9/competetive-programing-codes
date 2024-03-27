#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, flag = 0, greatest, smallest, c11 = 0, c22 = 0;
        cin >> n;

        int con3[n];
        int c3 = 0;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                int con1;
                cin >> con1;
                if (c11 == 0)
                {
                    greatest = con1;
                    c11++;
                }
                else{
                if (con1 > greatest)
                {
                    greatest = con1;
                }
                }
            }
            if (c == 2)
            {
                int con2;
                cin >> con2;
                if (c22 == 0)
                {
                    smallest = con2;
                    c22++;
                }
                else{
                if (con2 < smallest)
                {
                    smallest = con2;
                }
                }
            }
            if (c == 3)
            {
                cin >> con3[c3];
                c3++;
            }
        }
        for (int i = greatest; i < smallest; i++)
        {
            flag++;
            cout << flag;
        }
    }
    return 0;
}
