#include<iostream>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    while(x--){
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 2 < s.length() && s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
            {
                count++;
                i+=3;
            }
            else if (i + 2 < s.length() && s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')
            {
                count++;
                i+=3;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
      
    }
    return 0;
}