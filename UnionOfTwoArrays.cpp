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
for(int t:brr)
{
	s.insert(t);
}
cout<<s.size()<<"\n";
return 0;
}