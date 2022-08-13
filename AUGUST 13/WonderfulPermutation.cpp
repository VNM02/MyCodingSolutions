#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n,k;
	cin>>n>>k;
    vector<int> vec,pec;
	for(int i=0;i<n;i++)
	{
		int q;
		cin>>q;
		vec.push_back(q);
		pec.push_back(q);
	}
	sort(pec.begin(),pec.end());
	int c=0;
	for(int i=0;i<k;i++)
	{
		if(vec[i]==pec[i])
		{
			continue;
		}
		else
		{
			c++;
			for(int j=i+1;j<n;j++)
			{
				if(pec[j]==vec[i])
				{
					swap(vec[i],vec[j]);
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
	cout<<c<<"\n";
}
return 0;
}