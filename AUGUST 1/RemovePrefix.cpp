#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;cin>>n;
	int arr[n];
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]=0;
	}
	int p=-1;
    for (int i=n-1;i>=0;i--)
    {
        if (mp[arr[i]] == 0)
            mp[arr[i]]++;
        else
        {
            p=i;
            break;
        }
    }
		cout<<p+1<<"\n";
	

}
return 0;
}