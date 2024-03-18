#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int x;
cin>>x;
while (x--)
{
    int y,sum=0;
    cin>>y;
    int arr[y];
    for (int i = 0; i < y; i++)
    {
       cin>>arr[i];
    }
    sort(arr,arr+y);
for (int i = 1; i < y; i++)
{
  sum=sum+(arr[i]-arr[i-1]);
}
cout<<sum<<endl;
}

return 0;
}