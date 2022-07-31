#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int dp[100];

//BRUTE FORCE
int bigfrog(int n,int h[],int k)
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
	for(int i=1;i<=k;i++)
	{
		if(n-i>=0)
		cost=min(cost,bigfrog(n-i,h,k)+abs(h[n]-h[n-i]));
	}
	return dp[n]=cost;
}
int main(){
	memset(dp,-1,sizeof(dp));
int n,k;
cin>>n>>k;
int h[n];
for(int i=0;i<n;i++)
{
	cin>>h[i];
}

int bigans=bigfrog(n-1,h,k);
cout<<bigans<<"\n";
return 0;
}