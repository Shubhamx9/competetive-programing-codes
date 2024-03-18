#include <iostream>
using namespace std;
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n] = {0};
        while (n--)
        {
            cin >> x;
            cout << char('a' + arr[x]);
            arr[x]++;
        }
        cout << endl;
    }
    return 0;
}

// #include <vector>
// using namespace std;
// int countZeroes(const vector<int>& vii)
// {
//     int zeroCount = 0;
//     for (int i = 0; i < vii.size(); ++i)
//     {
//         if (vii[i] == 0)
//         {
//             zeroCount++;
//         }
//     }
//     return zeroCount;
// }
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         string s = "abcdefghijklmnopqrstuvwxyz";
//         vector<char> v;
//         int y, sf = 0;
//         cin >> y;
//         vector<int> vi;
//         for (int i = 0; i < y; i++)
//         {int num;
//             cin>>num;
//             vi.push_back(num);
//         }
//         int nz = countZeroes(vi);
//         while (nz--)
//         {

//             for (int i = 0; i < y; i++)
//             {
//                 int flag = 0;
//                 if (vi[i] == flag)
//                 {
//                     v.[i]=(s[sf]);
//                     flag++;
//                     vi.erase(vi.begin()+i);
//                 }
//             }
//             sf++;
//         }

//         for (int i = 0; i < v.size(); i++)
//         {
//             cout << v[i];
//         }
//         cout << endl;
//         cout<<nz<<endl;
//     }

//     return 0;
