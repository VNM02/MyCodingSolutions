#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,count=0,x;
	vector<ll>v;
	cin>>n;
	for(ll i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(ll i=0;i<n-1;i++){
		if(v[i+1] != v[i]+1){
			count+=v[i+1]-v[i]-1;
		}
	}
	cout<<count;
	
	return 0;
}

