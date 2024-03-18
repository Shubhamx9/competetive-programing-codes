#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum = 0;
    int nod, nos;
    cin >> nod >> nos;
    while (nod--)
    {
        int noe;
        cin >> noe;
        vector<int> v;

        while (noe--)
        {
            int ele;
            cin >> ele;
            v.push_back(ele);
        }

        while (nos-- && !v.empty())
        {
            if (v.front() >= v.back())
            {