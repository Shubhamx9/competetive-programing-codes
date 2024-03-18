#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        int arr[y];
        for (int i = 0; i < y; i++)
        {
            cin >> arr[i];
        }

        for (int j = 1; j < y; j++)
        {
            if (arr[j] <= arr[j - 1])
            {
                int multiplier = (arr[j - 1] / arr[j]) + 1;
                arr[j] *= multiplier;
            }
        else
        {
            continue;
        }
        }
    cout << arr[y - 1] << endl;
    }
return 0;
}
