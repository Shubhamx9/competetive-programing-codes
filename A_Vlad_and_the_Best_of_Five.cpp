#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){
    int a=0,b=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='A')
        {
            a++;
        }
        else{
            b++;
        }
        
    }
    if (a>b)
    {
       cout<<"A"<<endl;
    }
    else{cout<<"B"<<endl;}

}
return 0;
}