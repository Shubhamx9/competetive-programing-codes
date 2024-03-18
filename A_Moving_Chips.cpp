// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int count = 0;
//         int counto = 0, countoo = 0;
//         int y;
//         cin >> y;
//         vector<int> v(y);
//         for (int i = 0; i < y; i++)
//         {
//             cin >> v[i];
//         }

//         for (int i = 0; i < y; i++)
//         {
//             if (v[i] == 0)
//             {
//                 counto++;
//                 //    v.erase(v.begin()+i);
//             }
//             if (v[i] == 1)
//             {
//                 break;
//             }
//         }
//         v.erase(v.begin(), v.begin() + counto);
//          for (int i = v.size() - 1; i != 0; i--)
//         {
//             if (v[i] == 0)
//             {
//                 // /* code */v.erase(v.begin()+i);
//                 countoo++;
//             }
//             if (v[i] == 1)
//             {
//                 /* code */ break;
//             }
//         }
//         v.erase(v.end(), v.end() + countoo);

//             for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] == 0)
//             {
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int count = 0,  fp = 0;
        int y;
        cin >> y;
        int bp=y;
        int arr[y];
        for (int i = 0; i < y; i++)
        {
           cin>>arr[i];
        }
        
        for (int i = 0; i < y; i++)
        {
            if (arr[i] == 0)
            {
                fp = i;
                
            }
            else
            {
                break;
            }
        }
        for (int i = y - 1; i > 0; i--)
        {
            if (arr[i] == 0)
            {
                bp = i;
            }
            else
            {
                break;
            }
        }
        for (int i = fp+1; i < bp-1; i++)
        {
            /* code */ if (arr[i] == 0)
            {
                /* code */ count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}