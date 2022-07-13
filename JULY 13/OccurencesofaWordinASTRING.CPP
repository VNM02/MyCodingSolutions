#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int solve(string s,string word)
{
	int a=s.length(),b=word.length();
        int c=0;
	for(int i=0;i<a-b;i++)
	{
		string p=s.substr(0+i,b);
		if(p==word)
		{
			c++;
		}

	}
}
int solve1(int r,int u,int arr[],int n)
{
	int c=0;
	int req=r*u;
	int p=0;
	for(int i=0;i<n;i++)
	{
		if(c+arr[i]<=req)
		{
			c+=arr[i];
			p++;
		}
	}
	return p;
}
int main(){

	// string s;
	// cin>>s;
	// string word;
	// cin>>word;
	// int k=solve("tyiou abcd tyiou ijkl tyiou abcd acv tyiou","tyiou");
	// cout<<k<<"\n";
     int r=7,u=2,n=8;
	 int arr[n]={2,8,3,5,7,4,1,2};
	 int ans=solve1(r,u,arr,n);
	 cout<<ans<<"\n";
	 r=6;
	 u=4;
	 int krr[6]={8,4,5,3,4,7};
	 n=6;
	 ans=solve1(r,u,krr,n); 
	 cout<<ans<<"\n";
return 0;
}


