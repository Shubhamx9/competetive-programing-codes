#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array> 
using namespace std;       // std::array

int main () {
  array<int,8> foo = {3,5,7,11,12,17,19,23};

  if ( all_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
    cout << "All the elements are odd numbers.\n";
    else{
        cout<<"all elements are odd";
    }

  return 0;
}
