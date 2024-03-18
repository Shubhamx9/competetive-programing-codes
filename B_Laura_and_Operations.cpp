#include<iostream>
using namespace std;
int main(){
int h,x,y,z;

cin>>h;
while (h--)
{
    cin>>x>>y>>z;
    if (x % 2 == y % 2 && y % 2 == z % 2) {
  cout << "1 1 1" << endl;
}

if (x % 2 == y % 2 && y % 2 != z % 2) {
  cout << "0 0 1" << endl;
}

if (x % 2 == z % 2 && z % 2 != y % 2) {
  cout << "0 1 0" << endl;
}

if (y % 2 == z % 2 && z % 2 != x % 2) {
  cout << "1 0 0" << endl;
}

    
}


return 0;
}