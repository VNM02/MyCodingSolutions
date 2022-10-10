#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
 int nf;
 vector<int> vec;
 cin>>nf;
 int sum=0;
 for(int i=0;i<nf;i++)
 {
	int l;
	cin>>l;
	sum+=l;
	vec.push_back(l);
 }
 int ans=0;
 sum-=1;
 for(int i=1;i<=5;i++)
 {
	if(((sum+i)%(nf+1))!=0)
	{
		ans++;
	}
 }
 cout<<ans<<"\n";
return 0;
}