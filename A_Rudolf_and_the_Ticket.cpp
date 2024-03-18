#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){int a,y,q,count=0;
cin>>a>>y>>q;
int ar[a];
int arr[y];
for (int i = 0; i < a; i++)
{
    cin>>ar[i];
}
for (int i = 0; i < y; i++)
{
  cin>>arr[i];
}
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < y; j++)
    {
        if (ar[i]+arr[j]<=q)
        {
            count++;
        }
        
    }
    
}
cout<<count<<endl;
}
return 0;
}