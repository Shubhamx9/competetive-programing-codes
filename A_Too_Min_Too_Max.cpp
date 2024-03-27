#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){int y;
cin>>y;
int arr[y];
for (size_t i = 0; i < y; i++)
{
    /* code */cin>>arr[i];
}
sort(arr,arr+y);
cout<<(arr[y-1]-arr[0])
}
return 0;
}