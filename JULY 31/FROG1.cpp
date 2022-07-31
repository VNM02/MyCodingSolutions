#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
// BRUTE FORCE RECURSION
int dp[100];
int frog(int n,int h[])
{
	int cost=INT_MAX;
	if(n==0)
	{
		return 0;
	}

	// WAY 1 REACH AT Ith Stone from (I-1)th stone
	if(n>0)
	cost=min(cost,frog(n-1,h)+abs(h[n]-h[n-1]));
	//Way 2
	if(n>1)
	cost=min(cost,frog(n-2,h)+abs(h[n]-h[n-2]));
	return cost;
}
//BRUTE FORCE
int bigfrog(int n,int h[])
{
	int cost=INT_MAX;
	if(n==0)
	{
		return 0;
	}
    if(dp[n]!=-1)
	{
		return dp[n];
	}
	// WAY 1 REACH AT Ith Stone from (I-1)th stone
	if(n>0)
	cost=min(cost,frog(n-1,h)+abs(h[n]-h[n-1]));
	//Way 2
	if(n>1)
	cost=min(cost,frog(n-2,h)+abs(h[n]-h[n-2]));
	return dp[n]=cost;
}
int main(){
	memset(dp,-1,sizeof(dp));
int n;
cin>>n;
int h[n];
for(int i=0;i<n;i++)
{
	cin>>h[i];
}
int ans=frog(n-1,h);
cout<<ans<<"\n";
int bigans=bigfrog(n-1,h);
cout<<bigans<<"\n";
return 0;
}
