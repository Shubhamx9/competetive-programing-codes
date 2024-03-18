// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, n, s, t;

//     cin >> t;
//     while (t--)
//     {
//         cin >> a >> b >> n >> s;
//         for (int i = 1; i <= a; i++)
//         {
// int ci=0;
//   ci++;
//             for (int j = 1; j <= b; j++)
//             {int cj=2;
//                 cj++;
//                 if ((i * n) + j == s)
//                 {
//                     cout << "YES" << endl;
//                     break;
//                 }

//                 if (ci == a && cj == b + 1)
//                 {
//                     cout << "NO" << endl;
//                 }
//                 else
//                 {
//                     continue;
//                 }

//             }

//         }

//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, n, s, t;

//     cin >> t;
//     while (t--) {
//         cin >> a >> b >> n >> s;

//         bool canAchieve = false;

//         for (int i = 0; i <= a; i++) {

//             int remaining = s - (i * n);

//             if (remaining <= b && remaining >= 0) {
//                 canAchieve = true;
//                 break;
//             }
//         }

//         if (canAchieve) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int a, b, n, s, x;
    cin >> x;
    while (x--)
    {
        cin >> a >> b >> n >> s;
        if (s / n <= a)
        {
            if (s % n <= b)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
        if (s / n > a)
        {
            if (s - (a * n) <= b)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
    }

    return 0;
}
