#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=1e7+10;
vector<bool> vec(N,true);
int main(){
// ll n;
// cin>>n;
vec[0]=false;
vec[1]=false;
for(int i=2;i<N;++i) 
{
	if(vec[i]==true)
	{
		for(int j=2*i;j<N;j+=i)
		{
			vec[j]=false;
		}
	}
}
for(int i=1;i<10;i++)
{
	cout<<vec[i]<<" ";
}
return 0;
}