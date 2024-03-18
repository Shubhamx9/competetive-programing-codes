#include<iostream>
int quotient(int n) {
    
    if (n < 10) {
        return n;
    }
    return n % 10 + quotient(n / 10);
}
using namespace std;
int main()
{
int x;
cin>>x;
while(x--){
    int y;
    cin>>y;
    int finalsum=0;
    int arr[y];
    for (int i = 1; i < y+1; i++)
    {
       finalsum=finalsum+quotient(i);
    }
    // for (int i = 0; i < y; i++)
    // {
    //    finalsum=finalsum+quotient(arr[i]);
    // }
    // for (int i = 0; i < y; i++)
    // {
    //    finalsum=finalsum+arr[i];
    // }
    cout<<finalsum<<endl;
    


}
return 0;}