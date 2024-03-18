#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
while (x--)
{
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        /* code */for (size_t i = 2; 1<2; i++)
        {
            if (a*i%b==0)
            {
        cout<<a*i<<endl;break;
                /* code */
            }
            
        }
    }
    if (b>a)
    {
        /* code */for (size_t i = 2; 1<2; i++)
        {
          
           if (b*i%a==0)
           {
        cout<<b*i<<endl;break;
            /* code */
           }
           
        }
    }
    
}

return 0;
}