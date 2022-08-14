#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int a,b;
	cin>>a>>b;
	int x=0;
	vector<int> vec;
	for(int i=0;i<a;i++)
	{
		vec.push_back(i);
		x=x^i;
	}
	int p=x^b;
	if(x!=b)
	{
		if(p!=a)
		{
		vec.push_back(p);
		a++;
		}
		else
		{
		   int u=vec.back()+1;
		   int m=b^u;
		   vec.push_back(u);
		   vec.push_back(m);
		   a+=2;
		}

	}
	
	// for(int i=0;i<vec.size();i++)
	// {
	// 	cout<<vec[i]<<" ";
	// }
	// for(int i=0;i<vec.size();i++)
	// {
	// 	cout<<vec[i]<<" ";
	// }
	// cout<<"\n";
	cout<<a<<"\n";

}
return 0;
}