#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,c,q;
	cin>>n>>c>>q;
	string s;cin>>s;
   vector< pair<ll,ll> > len(c),que(c);
    ll curr=n;
	 for(int i=0;i<c;i++)
	 {
		cin>>que[i].first>>que[i].second;
		ll l=que[i].second-que[i].first+1;
		len[i].first=curr+1;
		len[i].second=curr+l;
		curr=len[i].second;
	 }   
	 while(q--)
	 {
		ll x;
		cin>>x;
		for(ll i=c-1;i>=0;i--)
		{
			if(x>=len[i].first && x<=len[i].second)
			{
				ll gap=x-len[i].first;
				x=que[i].first+gap;
			}
		}
		cout<<s[x-1]<<"\n";
	 }
}

return 0;
}
