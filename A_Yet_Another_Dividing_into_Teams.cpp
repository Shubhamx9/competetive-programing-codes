#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
int x;
cin>>x;
while (x--)
{
    int y,e;
    cin>>y;
   
    
    
    vector<int> v;
for (int  i = 0; i < y; i++)
{cin>>e;
    v.push_back(e);
}
for (int i = 0; i < y; i++)
{
    if (abs(v[0]-v[i])==1)
    {
       cout<<2<<endl;
       break;
    }
    else{cout<<1<<endl;
    break;}
}

}

return 0;
}