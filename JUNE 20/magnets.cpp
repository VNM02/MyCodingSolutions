#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
	int n,x,c=0;
	cin>>n;
	vector<ll>v;
	for(ll i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for(ll i=0;i<n-1;i++){
		if(v[i]!=v[i+1]){
			c++;
		}
	}
	cout<<c+1<<"\n";
return 0;
}
