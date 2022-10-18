#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=1e7+10;
vector<bool> vec(N,true);
void solve()
{
	int n;
	cin>>n;
	if(n==1)
	{
		cout<<"-1"<<"\n";
		return;
	}
	string s="2";
	for(int i=0;i<n-1;i++)
	{
		s+='3';
	}
	cout<<s<<"\n";
}
int main(){
// vec[0]=false;
// vec[1]=false;
// for(int i=2;i<N;++i) 
// {
// 	if(vec[i]==true)
// 	{
// 		for(int j=2*i;j<N;j+=i)
// 		{
// 			vec[j]=false;
// 		}
// 	}
// }
	int t;
	cin>>t;
for(int i=0;i<t;i++)
{
	solve();
}
return 0;
}
