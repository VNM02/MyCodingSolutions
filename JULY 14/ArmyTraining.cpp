#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll n;
cin>>n;
for(ll j=0;j<n;j++)
{
	int n;
	cin>>n;
	int arr[n];for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]<500)
		{
			arr[i]=1000-arr[i];
		}
		}
		ll a=0,d=0,ans=0;
		sort(arr,arr+n,greater<int>());
		for(int i=0;i<n;i++)
		{
			d+=arr[i];
		}
		ans=a*d;
		for(int i=0;i<n;i++)
		{
			a+=arr[i];
			d-=arr[i];
			ans=max(ans,a*d);
		}
		// if(n%2==0)
		// {
        //    for(int i=0;i<n;i++)
		//    {
		// 	if(i%2==0)
		// 	{
		// 		a+=arr[i];
		// 	}
		// 	else
		// 	{
		// 		d+=arr[i];
		// 	}
		 
		//    }
		//    ans=a*d;
		// }
		// else
		// {
        //        for(int i=0;i<n;i++)
		//    {
		// 	if(i%2==0)
		// 	{
		// 		a+=arr[i];
		// 	}
		// 	else
		// 	{
		// 		d+=arr[i];
		// 	}
		 
		//    }
		//    ans=max((a*d),(a-arr[n-1])*(d+arr[n-1]));
		// }

	cout<<ans<<"\n";

}
return 0;
}



















