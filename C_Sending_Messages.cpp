#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){long long n,f,a,b,im=0;
cin>>n>>f>>a>>b;
while (n--)
{int m;
  cin>>m;
  f=f-min((m-im)*a,b);
  im=m;
}
if (f<=0)
{
    /* code */cout<<"NO"<<endl;
}
else{cout<<"YES"<<endl;}

}
return 0;}