#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve(int n){
	int l,r,c=1;
	cin>>l>>r;
vector<int> ans;
ans.push_back(l);
for(int i=2;i<=n;i++)
{
	if(l%i==0)
	{
		ans.push_back(l);
		c++;
	}
	else
	{
		int j=l/i;
		j=(j+1)*i;
		if(j<=r)
		{
			ans.push_back(j);
			c++;
		}
		else
		{
			break;
		}
	}

}
	if(c==n)
	{
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n;
	cin>>n;
	solve(n);
	
}
return 0;
}