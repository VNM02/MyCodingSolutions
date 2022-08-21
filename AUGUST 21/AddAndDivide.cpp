#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
double logc(int a, int b)
{
	//cout<<log2(a) / log2(b)<<"\n";
    return log2(a) / log2(b);
}
void solve()
{
	int a, b;
    int ans = INT_MAX, pre = 0;
    cin >> a >> b;
 
    if (!a)
    {
        cout << 0;
        return;
    }
 
    if (b == 1)
    {
        b++;
        pre++;
    }
 
    for (int i = b; i <= b + 30; i++)
    {
        int r = 0;
        // cout << i << " : ";
        int res = 0;
        int A = a, B = i;
        res = i - b;
        while (A > 0)
        {
            // cout << A << endl;
            A /= B;
            res++;
        }
        // cout << "here __ " << res << endl;
        if (ans == res)
            r++;
 
        ans = min(ans, res);
        if (r == 3)
            break;
    }
 
    cout << ans + pre<<"\n";
	
}
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	
	solve();
}
return 0;
}
