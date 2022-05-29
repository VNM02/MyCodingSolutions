
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int n;
cout<<"Enter size of array"<<"\n";
cin>>n;
int arr[n];
cout<<"Enter the elements of array"<<"\n";
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
	unordered_set<int> s;
	for(int t=0;t<n;t++)
	{
		s.insert(arr[t]);
	}
	cout<<s.size();
return 0;
}