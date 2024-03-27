// // #include<iostream>
// // #include<vector>
// // int count(vector<int>v){
// // int counter=0;
// // for (int i = 0; i < v.size(); i++)
// // {
// //     if (v[i==0])
// //     {
// //         counter++;
// //     }

// // }
// // return counter;
// // }
// // using namespace std;
// // int main()
// // {int y;
// // cin>>y;
// // while (y--)
// // {
// //     int svv;
// //     cin>>svv;
// //     vector<int>vv;
// //     for (size_t i = 0; i < svv; i++)
// //     {
// //         cin>>vv[i];
// //     }

// // }

// // return 0;
// // }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     while (x--)
//     {
//         int y,zc=0,sc=0,elefag=0;
//         cin>>y;
//         int arr[y];
//         char vs[y];
//         string s ="abcdefghijklmnopqrstuvwxyz";
//         for (int i = 0; i < y ;i++)
//         {
//             cin>>arr[i];
//         }
//         for (int i = 0; i < y; i++)
//         {
//             if (arr[i]==0)
//             {
//                zc++;
//             }

//         }
//         while (zc--)
//         {
//            for (int i = 0; i < y; i++)
//            {
//             if (arr[i]==elefag)
//             {
//               vs[i]=s[sc];
//               elefag++;
//               arr[i]=27;
//             }

//            }
//            sc++;
//         }
//         for (int i = 0; i < y; i++)
//         {
//            cout<<vs[i] ;
//         }
//         cout<<endl;

//     }

// return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;

//     while (x--)
//     {
//         int y, zc = 0, sc = 0;
//         cin >> y;

//         vector<int> arr(y);
//         vector<char> vs(y);

//         string s = "abcdefghijklmnopqrstuvwxyz";

//         for (int i = 0; i < y; i++)
//         {
//             cin >> arr[i];
//         }

//         for (int i = 0; i < y; i++)
//         {
//             if (arr[i] == 0)
//             {
//                 zc++;
//             }
//         }

//         while (zc--)
//         {
//             int elefag = 0;
//             for (int i = 0; i < y; i++)
//             {
//                 if (arr[i] == elefag)
//                 {
//                     vs[i] = s[sc];
//                     elefag++;
//                     arr[i] = 27;
//                 }
//             }
//             sc++;
//         }

//         for (int i = 0; i < y; i++)
//         {
//             cout << vs[i];
//         }
//         cout << endl;
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main()

{cout<<(char)(2+'a');
return 0;
}