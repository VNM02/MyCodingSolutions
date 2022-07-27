#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int f(int ind,vector<int> & nums)   //RECURSION
{
	if(ind==0)
	{
		return nums[ind];
	}
	if(ind<0)
	{
		return 0;
	}
	int pick=nums[ind]+f(ind-2,nums);
	int notpick=0+f(ind-1,nums);
	return max(pick,notpick);
}

vector<int> dp(32,-1);
int maxofNASubsequence(int ind,vector<int> &nums,vector<int> &dp)
{
	if(ind==0)
	{
		return nums[ind];
	}
	if(ind<0)
	{
		return 0;
	}
	if(dp[ind]!=-1)
	{
		return dp[ind];
	}
	int pick=nums[ind]+maxofNASubsequence(ind-2,nums,dp);
	int notpick=0+maxofNASubsequence(ind-1,nums,dp);
	return dp[ind]=max(pick,notpick);
}
int main(){
  vector<int> vec={2,1,4,9};
  int n=4;
   int ans1=f(3,vec);
   cout<<ans1<<endl;
   int ans2=maxofNASubsequence(3,vec,dp);
     cout<<ans2<<endl;
return 0;
}