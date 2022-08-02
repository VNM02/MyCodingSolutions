#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,h,m;
	cin>>n>>h>>m;
	int arr[n];
	vector<pair<int,int> > vec;
	vector<pair<int,int> > pec;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}
	
	int h1=0,m1=0;
	for(int i=0;i<n;i++)
	{
		if(vec[i].first==h)
		{
			h1=0;
			if(vec[i].second==m)
			{
				
				m1=0;				
			}
			else if(vec[i].second>m)
			{
			
			m1=vec[i].second-m;	
			}
		else
			{		
				h1=23;
			m1=-m+vec[i].second+60;
			}

		}		
		else if(vec[i].first>h)
		{
			h1=vec[i].first-h;
			if(vec[i].second==m)
			{
				m1=0;				
			}
			else if(vec[i].second>m)
			{		
				m1=vec[i].second-m;
			}
			else{
				h1--;
				m1=vec[i].second-m+60;
			}
			
		}
		else {
			h1=24-h+vec[i].first;
			if(vec[i].second==m)
			{
				m1=0;	
			}
			else if(vec[i].second>m)
			{
				m1=vec[i].second-m;
			}
			else
			{
				h1--;
				m1=-m+vec[i].second+60;
			}
		}
		pec.push_back(make_pair(h1,m1));
	}
    sort(pec.begin(), pec.end());
	cout<<pec[0].first<<" "<<pec[0].second<<"\n";
}
return 0;
}