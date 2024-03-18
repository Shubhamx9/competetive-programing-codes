#include <iostream>
#include <algorithm>
#include <vector>
int max( int arrr[],int x){int gr=0;
for (size_t i = 0; i < x; i++)
{
    /* code */if (arrr[i]>gr)
    {
        /* code */gr=arrr[i];
    }
    
}
return gr;
}
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        int arr[y];
       
        int lc;
        vector<int> v;
        for (size_t i = 0; i < y; i++)
        {
            cin >> arr[i];
            
        }
        int g=max(arr,y);
      
        for (size_t i = 0; i < y; i++)
        {
            if (arr[i] == g)
            {
                v.push_back(i);
            }
        }
    }
    return 0;
}