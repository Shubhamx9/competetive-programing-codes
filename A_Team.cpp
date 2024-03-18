#include<iostream>
using namespace std;
int main(){
int x; int r=0;
int o[3];
cin>>x;
while (x--)
{for (int i = 0; i < 3; i++)
{
    cin>>o[i];
}
if (o[0]+o[1]+o[2]>=2)
{
   r++;
}

    
    
}
cout<<r;
return 0;
}