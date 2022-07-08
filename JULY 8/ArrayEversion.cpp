#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
	ll arr[n];
	ll brr[n];

	ll ma=0;
	for(int i=0;i<n;i++)
	{
     cin>>arr[i];
	 ma=max(arr[i],ma);
	}
		brr[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		brr[i]=max(arr[i],brr[i+1]);
	}
   set<ll> st;
   bool t=false;
   for(int i=0;i<n;i++)
   {
       if(t==true && brr[i]!=ma)
	   {
		st.insert(brr[i]);
	   }
	   if(brr[i]==ma)
	   {
		t=true;
	   }
   }
   cout<<st.size()<<"\n";

}
return 0;
}
