#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    int nod, nos;
    cin >> nod >> nos;
    vector<vector<int>> v;
    
    
    while (nod--) {
        int noe;
        cin >> noe;
        vector<int> vv;
        while (noe--) {
            int ele;
            cin >> ele;
            vv.push_back(ele);
        }
        v.push_back(vv);
    }

    
    while (nos--) {
    int maxFirstElement = v[0][0];
    for (const vector<int> &row : v) {
        if (row[0] >= maxFirstElement)
            maxFirstElement = row[0];
    }

   
    int maxLastElement = v[0].back();
    for (const vector<int> &subVec : v) {
        int lastElement = subVec.back();
        if (lastElement > maxLastElement)
            maxLastElement = lastElement;
    }

   
        if (maxFirstElement >= maxLastElement) {
            for (vector<int> &row : v) {
                if (!row.empty() && row[0] == maxFirstElement) {
                    sum += maxFirstElement;
                    row.erase(row.begin());
                    break;
                }
            }
        } else {
            for (vector<int> &subVec : v) {
                if (!subVec.empty() && subVec.back() == maxLastElement) {
                    sum += maxLastElement;
                    subVec.pop_back();
                    break;
                }
            }
        }
    }

    cout << sum << endl;
    return 0;
}