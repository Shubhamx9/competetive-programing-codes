#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
while (x--)
{
    int n,k;
    cin>>n>>k;
    if (k<(4*n-2))
    {
       if (k%2==0)
       {
       cout<<k/2<<endl;
       }
       if (k%2==1)
       {
        cout<<(k+1)/2<<endl;
       }
       
    }
    if (k==(4*n-2))
    {
        if (k%2==0)
        {
            cout<<(k/2)+1<<endl;
        }
        if (k%2==1)
        {
           cout<<(k+1)/2<<endl;
        }
        
    }
    
}

return 0;
}