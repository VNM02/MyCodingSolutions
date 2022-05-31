#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
vector <int> vec;
int n;
cin>>n;
for(int i=2;i<=n;i++)
{
	while(n%i==0)
	{
		vec.push_back(i);
		n/=i;
	}
}
for(auto it=vec.begin();it!=vec.end();it++)
{
	cout<<*it<<"\n";
}
return 0;
}