#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n,k;
	cin>>n>>k;
	int arr[n],brr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>brr[i];
	}	
    vector<pair<int,int>> vect;
	for(int i=0;i<n;i++)
	{
		vect.push_back(make_pair(arr[i],brr[i]));
	}
	sort(vect.begin(), vect.end());
	for (int i=0; i<n; i++)
    {
         if(vect[i].first<=k )
            k+=vect[i].second;
    }
	cout<<k<<"\n";

}
return 0;
}
//Learnt how to use and make pairs