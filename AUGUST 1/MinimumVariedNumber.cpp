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
	vector<int> vec;
	if(n<=9)
	{
		cout<<n<<"\n";
	}
	else
	{
		
		for(int i=9;i>0;i--)
		{
			if((n-i)>=0 && n>0)
			{
				vec.push_back(i);
				n-=i;
			}
		}
	}
	for(int i=vec.size()-1;i>=0;i--)
	{
		cout<<vec[i];
	}
	cout<<"\n";
	
}
return 0;
}