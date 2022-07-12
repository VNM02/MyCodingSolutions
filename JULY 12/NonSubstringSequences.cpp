#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int l,n;
    cin>>l>>n;
	string s;
	cin>>s;
	vector<pair<int,int> > vec(n+1);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i].first>>vec[i].second;
		
	}
	for(int i=0;i<n;i++)
	{
		bool check=true;
		int c=0;
		string s1=s1.substr(vec[i].first-1,vec[i].second-vec[i].first+1);
		string s2="";
		int k=0;
		for(int j=0;j<l;j++)
		{
         if(s[j]=s1[k])
		 {
			s2+=s[j];
			k++;
               if(c==0)
		 {
			c++;
			j++;
		 }
		 }
		 
		 
		}
		if(s2==(s1))
		 {
			cout<<"YES"<<"\n";
		 }
		 else
		 {
			cout<<"NO"<<"\n";
		 }
	}

}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	solve();
}
return 0;
}