#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
ll p=t;
//O(N)
vector<int> vec;
for(int i=2;i<=t;i++)
{
	while(t%i==0)
	{
		vec.push_back(i);
		t/=i;
	}
} 

// O(sqrt(N))

vector<int> vec1;
for(int i=2;i<=p;i++)
{
	while(p%i==0)
	{
		vec1.push_back(i);
		p/=i;
	}
} 
if(p>1)
{
	vec1.push_back(p);
}
vector<int> ::iterator it;
for(it=vec.begin();it!=vec.end();it++)
{
	cout<<*it<<" ";
}
return 0;
}