#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve(){
     int A,B,n;
     cin>>A>>B>>n;
     vector<pair<int,int>>v(n);
     for(int i=0;i<n;i++)cin>>v[i].first;
     for(int i=0;i<n;i++)cin>>v[i].second;
     sort(v.begin(),v.end());
     for(int i=0;i<n;i++){
         if(B<=0){
             cout<<"NO\n";
             return;
         }
        ll a=v[i].first, b=v[i].second;
          ll x=b/A;
        if(b%A) x++;
        ll y=B/a;
        if(B%a)y++;
       
        y=min(y,x);
        B=B-(y*a);
        v[i].second-=y*A;
     }
     for(int i=0;i<n;i++){
         if(v[i].second>0){
             cout<<"NO\n";
             return;
         }
     }
     cout<<"YES\n";
}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	// int a,b,n;
	// cin>>a>>b>>n;
	// int arr[n];
	// int brr[n];
	// for(int i=0;i<n;i++)
	// {
	// 	cin>>arr[i];
	// }
	// for(int i=0;i<n;i++)
	// {
	// 	cin>>brr[i];
	// }
	// bool check=true;
	// if(n==1)
	// {
	// 	if(b<brr[0])
	// 	{
	// 		check=false;
	// 	}
	// }
    // else
	// {
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		int ta=ceil(brr[i]/a);
	// 		if(b<0)
	// 		{
	// 			check=false;
	// 			break;
	// 		}
	// 		if(b>=arr[i]*ta)
	// 		{
	// 			b-=arr[i]*ta;
	// 		}
	// 	}
	// }
	// if(check==true)
	// {
	// 	cout<<"YES"<<"\n";
	// }
	// else
	// {
	// 	cout<<"NO"<<"\n";
	// }
	solve();
}
return 0;
}