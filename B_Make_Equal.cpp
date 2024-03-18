// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// int x;
// cin>>x;
// while (x--)
// {int position;
// int sposition;
//     int y;
//     cin>>y;
//     if(y==1){
//         cout<<"YES"<<endl;
//         continue;
//     }
//     int  arr[y];
//     int sum=0;
//     int gsum=0;
//     int ssum=0;
//     for (size_t i = 0; i < y; i++)
//     {
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     int avvv=sum/y;
//     sort(arr,arr+y);
// for (int i = 0; i < y; i++)
// {
//     if (arr[i]>avvv)
//     {
//        position=i;
//        break;
//     }
//     if (arr[i]<avvv)
//     {
//        sposition=i;
//     }
    
    
// }
// for (int i = position; i < y; i++)
// {
//    gsum+=arr[i];
// }
// int extra=gsum-(y-position)*avvv;
// for (int i = 0; i < sposition; i++)
// {
//     ssum+=arr[i];
// }
// if ((extra+ssum)/(sposition+1)==avvv)
// {
//   cout<<"YES"<<endl;

// }
// else{cout<<"NO"<<endl;}

// }

// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    while (x--) {
        int y;
        cin >> y;
        
        if (y == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        int arr[y];
        int sum = 0;
        
        for (int i = 0; i < y; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        int avvv = sum / y;
        
        int gsum = 0;
        int ssum = 0;
        
        sort(arr, arr + y);
        
        int position = 0;
        int sposition = y;
        
        for (int i = 0; i < y; i++) {
            if (arr[i] > avvv) {
                position = i;
                break;
            }
            if (arr[i] < avvv) {
                sposition = i;
            }
        }
        
        for (int i = position; i < y; i++) {
            gsum += arr[i];
        }
        
        int extra = gsum - (y - position) * avvv;
        
        for (int i = 0; i < sposition; i++) {
            ssum += arr[i];
        }
        
        if (extra + ssum == avvv * sposition) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
