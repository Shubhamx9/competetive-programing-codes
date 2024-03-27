// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int x;
// //     cin>>x;
// // while (x--)
// // {
// //   int y,z;
// //   cin>>y>>z;
// //   cout<<z/y<<endl;
// // }

// // return 0;

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;

//     for (int i = 2; i <= x; i++)
//     {if (x==2)
//     {
//        cout<<"YES";
//        break;
//     }

//        else if (i == x)
//         {
//             cout << "YES";
// break;
//         }

//         else if (x % i == 0)
//         {
//             cout << "NO" << endl;
//             break;
//         }
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int arr[x];
int ans=0;
for (int i = 0; i < x; i++)
{
   cin>>arr[i];
}
for (int i = 1; i <= x; i++)
{
  if (arr[i]<=arr[i-1])
  {
    ans=ans+(((arr[i-1]-arr[i])+y)/y);
    int add=((arr[i-1]-arr[i])+y)/y;
    arr[i]=arr[i]+add*y;}
  }

cout<<ans<<endl;
return 0;

}
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     if (x == 2) {
//         cout << "YES";
//     } else {
//         bool isPrime = true;
//         for (int i = 2; i < x; i++) {
//             if (x % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime) {
//             cout << "YES";
//         } else {
//             cout << "NO";
//         }
//     }

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int x;
// cin>>x;
// int count=0;
// for (int i = 1; i < =x; i++)
// {
//    if (x%i==0)
//    {
//    count++;
//    }

// }
// if (count==2)
// {
//    cout<<"YES";
// }else{cout<<"NO";}

// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[x];
    int b[x];
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < x; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; i++)
        {

            if (a[i] == b[j])
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}
#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;

return 0;
}