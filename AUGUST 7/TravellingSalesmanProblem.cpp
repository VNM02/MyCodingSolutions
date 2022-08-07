#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

void solve()
{
	int n;
	cin>>n;
	int xp=0,xn=0,yp=0,yn=0,ans=0;

	for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        xp=max(xp,a);
		xn=min(xn,a);
		yp=max(yp,b);
		yn=min(yn,b);
    }	
	ans+=(xp-xn)+(yp-yn);
	cout<<2*ans<<"\n";
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
