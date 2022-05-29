#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cin>>m;
int brr[m];
for(int i=0;i<m;i++)
{
	cin>>brr[i];
}
unordered_set<int> s;
for(int t:arr)
{
	s.insert(t);
}
int count=0;

for(int b:brr)
{
	if(s.count(b)==1)
	{
		count++;
      s.erase(b);
	}
}
cout<<count<<"\n";
return 0;
}