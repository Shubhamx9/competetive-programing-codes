#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
while (x--)
{
   int y,f=0,e=0;
   cin>>y;
   string s;
   cin>>s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i]=='B')
    {
       f=i+1;
       break;
    }
    else{continue;}
    
  }
  for (int i = s.length()-1; i >=0 ; i--)
  {
    if (s[i]=='B')
    {
        e=i+1;
        break;
    }
    else{
        continue;
    }
  }
  
cout<<(e-f)+1<<endl;
}
return 0;
}