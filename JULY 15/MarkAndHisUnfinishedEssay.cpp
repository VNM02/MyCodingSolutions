 #include <bits/stdc++.h>
 typedef long long ll ;
 using namespace std ;
 int main(){
 int t;
 cin>>t;
 for(int j=0;j<t;j++)
 {
	int n,c,q;
	cin>>n>>c>>q;
	vector<char> vec;
	string s;
	cin>>s;
     for(int i=0;i<n;i++)
	 {
		vec.push_back(s[i]);
	 }
	for(int i=0;i<c;i++)
	{
		int a,b;
		cin>>a>>b;
		for(int i=a-1;i<b;i++)
		{
			vec.push_back(vec[i]);
		}
		
		// cout<<s<<"\n";
		}
		for(int i=0;i<q;i++)
		{
			int k;
			cin>>k;
			cout<<vec[k-1]<<"\n";
		}
 }
 return 0;
 }