#include <iostream>
#include <vector>
using namespace std;
    int prod(int x, vector<int> v){int productt=1;
        for (int i = 0; i < v.size(); i++)
    {
       productt = (productt * v[i]) % x;
    }
    return productt;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m,cc=0;
        cin >> n >> m;
        vector<int> v(n);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
          
            cout << prod(m,v)<<" ";
            if (s[j] == 'R')
            {
                v.pop_back();
            }
            else if (s[j] == 'L')
            {
              v[cc]=1;
              cc++  ;
                
            }
        }

        cout << endl;
    }

    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef pair<int, int> P; 
// #define int long long
// const int N = 2e5 + 7, mod = 1e9 + 7;
// int n, m, x; 
// int a[N], b[N], su[N];
// char s[N];
// inline void run(){
// 	cin >> n >> m;
// 	int o = 0;
// 	a[0] = 1, b[0] = 1;
// 	for(int i = 1; i <= n; i++){
// 		cin >> x;
// 		a[i] = x % m;
// 	}
// 	int l = 0, r = n+1, ans = 1;
// 	for(int i = 1; i <= n; i++){
// 		cin >> s[i];
// 		if(s[i] == 'L'){
// 			l++;
// 		}
		
// 		else if(s[i] == 'R'){
// 			r--;
// 		}
// 	}
// 	for(int i = n; i >= 1; i--){
// 		if(s[i] == 'L'){
// 			ans = ans * a[l] % m;
// 			l--;
// 		}
// 		else if(s[i] == 'R'){
// 			ans = ans * a[r] % m;
// 			r++;
// 		}
// 		su[i] = ans;
// 	}
	
// 	for(int i = 1; i <= n; i++){
// 		cout << su[i] << ' ';
// 	}
// 	cout << '\n';
// }

// signed main(){
//     std::ios_base::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     int T;
//     for(cin >> T; T > 0; T --)
//     run(); return 0;
// }