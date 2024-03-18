#include<iostream>
using namespace std;
int main(){
    long long x,y,a;
    cin>>x>>y>>a;
    
    if (x%a!=0)
    {
        x=x+(a-(x%a));
    }
    if (y%a!=0)
    {
        y=y+(a-(y%a));
    }
    cout<<(y/a)*(x/a);
}