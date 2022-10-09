#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int n;
cin>>n;
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
	int l;
	cin>>l;
	mp[l]=i;
}
int q;
cin>>q;
vector<int> que;
ll a=0,b=0;
for(int i=0;i<q;i++)
{
	int l;
	cin>>l;
	que.push_back(l);
	a+=mp[l]+1;
	b+=n-mp[l];
}
cout<<a<<" "<<b<<"\n";
return 0;
}
