#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	//vector<ll> vec;
	//int arr[n];
	int p;
	cin>>p;
	// vec.push_back(p);
	// if(n>1)
	// for(int i=1;i<n;i++)
	// {
	// 	ll u;
	// 	cin>>u;
	// 	if(u<vec[0])
	// 	{
	// 		vec.insert(vec.begin(),u);
	// 	}
	// 	else
	// 	{
	// 		vec.push_back(u);
	// 	}
	// }
	deque<int> dq;
	dq.push_front(p);
	if(n>1)
	{
		for(int i=1;i<n;i++)
		{
			int u;
			cin>>u;
			if(u<dq.front())
			{
				dq.push_front(u);
			}
			else{
				dq.push_back(u);
			}
		}
	}
	// for(int i=1;i<n;i++)
	// {
	// 	if(vec[i]<vec[0])
	// 	{
	// 		swap(vec[i],vec[0]);
	// 	}
	// }
	// vec.push_back(arr[0]);
	//cout<<vec[0]<<"\n";
	// for(int i=1;i<n;i++)
	// {
	// 	if(arr[i]<vec[0])
	// 	{
	// 		vec.insert(vec.begin(),arr[i]);
	// 	}
	// 	else
	// 	{
	// 		vec.push_back(arr[i]);
	// 	}
		
	// }
	for(int i=0;i<n;i++)
	{
		cout<<dq[i]<<" ";
	}
	cout<<"\n";
	
}
return 0;
}
