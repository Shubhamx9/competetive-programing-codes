#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (y--)
    {
        int x;
        cin >> x;
        int l = 2 * x;
        int arr[l];
        int sum = 0;
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + l);
        for (int i = 0; i < l; i +=2)
        {
            sum = sum + arr[i];
        }
        cout << sum<<endl;
    }

    return 0;
}