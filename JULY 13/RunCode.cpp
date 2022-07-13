#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int> mp;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
		
	}
	sort(arr,arr+n);
	int c=0,maitr=0;
	for(auto i:mp)
	{
		
		if(i.second==1)c++;
		maitr=max(maitr,i.second);
	}
	
	if(c%2)
	{
		int ans;
		ans=(c+1)/2;
		if(mp[arr[n-1]]==1)
		{
			if(maitr==2)
			{
               ans++;
			}
		}
		cout<<ans<<"\n";
	}
	else
	{
		int ans;
		ans=c/2;
		cout<<ans<<"\n";
	}
	

}
return 0;
}

// if(c==n && n>3)
// 	{
//          c-=2;
// 	}
// 	if(mp[arr[n-1]]==1 && n>2)
// 	{
// 		int q=0;
// 		q=mp[arr[0]];
// 		if((q+1)==n)
// 		{
// 			c=q;
// 		}
// 		int p=mp.size();
// 		int i=0,ok=0;
// 		for(int i=0;i<p-1;i++)
// 		{
// 			if(mp[arr[i]]==1)
// 			{
// 				ok=1;
// 				break;
// 			}
// 			i++;
// 		}
		
// 	}