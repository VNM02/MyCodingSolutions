#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		int l;
		cin>>l;
		vec.push_back(l);
	}
	sort(vec.begin(),vec.end());
	cout<<vec[n-1]+vec[n-2]-vec[0]-vec[1]<<"\n";
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
 solve();
}
return 0;
}