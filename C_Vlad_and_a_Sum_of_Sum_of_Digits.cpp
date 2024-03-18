// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int y;
//         cin >> y;
//         int sum = 0;
//         for (int i = 1; i <= y; i++)
//         {

//             if (i <= 10)
//             {
//                 sum =sum+ i;
//             }
//             else
//             {
//                 int rem = 0;
//                 while (i > 0)
//                 {
//                     rem = rem + i % 10;
//                     i = i / 10;
//                 }
//                 sum =sum+ rem;
//             }
//         }
//         cout << sum << endl;
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
        int y;
        cin >> y;
        int sum = 0;
        for (int i = 1; i <= y; i++)
        {
            if (i <= 10)
            {
                sum += i;
            }
            else
            {
                int rem = 0;
                int temp = i;
                while (temp > 0)
                {
                    rem += temp % 10;
                    temp = temp / 10;
                }
                sum += rem;
            }
        }if(sum<10)
        cout << sum << endl;
        else cout<<sum-9<<endl;
    }

    return 0;
}

