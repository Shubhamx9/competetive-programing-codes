// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int sum=0;
// int nod,nos,noe;
// cin>>nod>>nos>>noe;
// vector<int> v;
// while (noe--)
// {int ele;
// cin>>ele;
//     v.push_back(ele);
// }
// while (nos--)
// {
//   if (v.front()>=v.back())
//   {
//    sum+=v.front();
//    v.erase(v.front());
//   }else{
//     sum+=v.back();
//     v.erase(v.back());
//   }

// }
// cout<<sum<<endl;
// return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int nod, nos, noe;
//     cin >> nod >> nos >> noe;
//     vector<int> v;

//     while (noe--)
//     {
//         int ele;
//         cin >> ele;
//         v.push_back(ele);
//     }

//     auto begin = v.begin();
//     auto end = v.end();
//     while (nos-- && begin != end)
//     {

//         sum += *begin;

//         ++begin;
//     }

//     cout << sum << endl;
//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
    
//     int sum = 0;
//     int nod, nos;
//     cin >> nod >> nos;
//     vector<vector<int>> v;
//     while (nod--)
//     {
//         int noe;
//         cin >> noe;
//         vector<int> vv;
//         while (noe--)
//         {
//             int ele;
//             cin >> ele;
//             vv.push_back(ele);
//         }
//         v.push_back(vv);
//     }
//     int max = v[0][0];
//     for (const vector<int> &row : v)
//     {
//         if (row[0] > max)
//             {
//                 max = row[0];
//             }
//     }
//     int bmax = v[0].back();
//     for (const vector<int> &subVec : v)
//     {

//         int lastElement = subVec.back();

//         if (lastElement > bmax)
//         {
//             bmax = lastElement;
//         }
//     }
//     while (nos--)
//     {

//         if (max >= bmax)
//         {
//             for (vector<int> &row : v)
//             {
//                 if (row[0] == max)
//                 {
//                     sum += max;
//                     row.erase(row.begin());
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             for (vector<int> &subVec : v)
//             {

//                 if (subVec.back() == bmax)
//                 {
//                     sum += bmax;
//                     subVec.pop_back();
//                     break;
//                 }
//             }
//         }
//     }

//     cout << sum << endl;
//     return 0;
// }

// while (nos-- )
// {
//     if (v.front() >= v.back())
//     {
//         sum += v.front();
//         v.erase(v.begin());
//     }
//     else
//     {
//         sum += v.back();
//         v.pop_back();
//     }
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    int nod, nos;
    cin >> nod >> nos;
    vector<vector<int>> v;
    
    
    while (nod--) {
        int noe;
        cin >> noe;
        vector<int> vv;
        while (noe--) {
            int ele;
            cin >> ele;
            vv.push_back(ele);
        }
        v.push_back(vv);
    }

    
    while (nos--) {
    int maxFirstElement = v[0][0];
    for (const vector<int> &row : v) {
        if (row[0] >= maxFirstElement)
            maxFirstElement = row[0];
    }

   
    int maxLastElement = v[0].back();
    for (const vector<int> &subVec : v) {
        int lastElement = subVec.back();
        if (lastElement > maxLastElement)
            maxLastElement = lastElement;
    }

   
        if (maxFirstElement >= maxLastElement) {
            for (vector<int> &row : v) {
                if (!row.empty() && row[0] == maxFirstElement) {
                    sum += maxFirstElement;
                    row.erase(row.begin());
                    break;
                }
            }
        } else {
            for (vector<int> &subVec : v) {
                if (!subVec.empty() && subVec.back() == maxLastElement) {
                    sum += maxLastElement;
                    subVec.pop_back();
                    break;
                }
            }
        }
    }

    cout << sum << endl;
    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int sum = 0;
//     int nod, nos;
//     cin >> nod >> nos;
//     vector<vector<int>> v;

//     while (nod--) {
//         int noe;
//         cin >> noe;
//         vector<int> vv;
//         while (noe--) {
//             int ele;
//             cin >> ele;
//             vv.push_back(ele);
//         }
//         v.push_back(vv);
//     }

//     while (nos--) {
//         int maxElement = 0;
//         vector<int>* maxSubVec = nullptr;
//         for (vector<int> &subVec : v) {
//             if (!subVec.empty()) {
//                 int middleElement = subVec[subVec.size() / 2];
//                 if (middleElement > maxElement) {
//                     maxElement = middleElement;
//                     maxSubVec = &subVec;
//                 }
//             }
//         }

//         if (maxSubVec != nullptr) {
//             sum += maxElement;
//             maxSubVec->erase(maxSubVec->begin() + maxSubVec->size() / 2);
//         }
//     }

//     cout << sum << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     cin >> number;
//     int arr[number];
//     int sum = 0;
//     for(int i = 0; i < number ; i++){
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     int k = sum/3;
//     sum = 0;

//     if(sum%3 != 0){
//         cout << 0 << endl;
//     }
//     else{
//         cout << 1 << endl;
        /*jai shree ram*/

    