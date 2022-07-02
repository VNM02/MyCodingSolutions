#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i;

    ll sum = 0, need = 0;
    int flag = 1;
 
    for (int i = 0; i < n; i++)
    {
        need += i;
        sum += vec[i];
        if (sum < need)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
	{
		cout << "YES\n";
	}
        
    else
        cout << "NO\n";
   
}
return 0;
}
