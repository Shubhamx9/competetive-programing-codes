// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         int n, c1 = 0, cn1 = 0;
//         cin >> n;
//         int arr[n][n];
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[i][j] == 1)
//                 {
//                     c1++;
//                     for (int y = 0; y < n&& i+1<n; y++)
//                     {
//                         if (arr[i + 1][y] == 1)
//                         {
//                             cn1++;
//                         }
//                     }
//                 }else{continue;}
//             }
//         }
//         if (c1 == cn1)
//         {
//             cout << "SQUARE" << endl;
//         }
//         else
//         {
//             cout << "TRIANGLE" << endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     while (x--) {
//         int n, c1 = 0, cn1 = 0;
//         cin >> n;
//         int arr[n][n];

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cin >> arr[i][j];
//             }
//         }

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (arr[i][j] == 1) {
//                     c1++;
//                         for (int y = 0; y < n; y++) {
//                             if (i+1<n&&arr[i + 1][y] == 1) {
//                                 cn1++;
//                             }
//                         }
                    
//                 }
//             }
//         }
//         if (c1 == cn1) {
//             cout << "SQUARE" << endl;
            
//         } else {
//             cout << "TRIANGLE" << endl;
            
//         }

//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){
    int y,c1=0;
    cin>>y;
    int arr[y];for (int i = 0; i < y; i++)
    {
       cin>>arr[i];
    }
    
      for (int i = 0; i < y; i++)
      {
      
       if (arr[i]==arr[i+1]&&arr[i]!=0)
       {
        cout<<"SQUARE"<<endl;
        break;
       }
       if (arr[i]!=arr[i+1]&&arr[i]!=0)
       {
        cout<<"TRIANGLE"<<endl;
        break;
       }
       
       
      }
      
       
    
    
    
}
return 0;
}
