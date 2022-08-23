#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	string s;
	cin>>s;
	
	string ans="";
	if(s.length()==1)
	{
		ans.push_back('0');
	}
	else
	{
			for(int i=0;i<s.length();i++)
	{
		if(s[i]=='.')
		{
			ans.push_back('0');
		}
		
		else{
			if(s[i+1]=='.')
			{
				ans.push_back('1');
				
			}
			else
			{
				ans.push_back('2');
			}
			i++;
			}
	}
	}

	// if(s.length()>1)
	// {
	// 	if(s[s.length()-1]=='.')
	// 	{
	// 		if(s[s.length()-2]=='.')
	// 		{
	// 			ans.push_back('0');
	// 		}
	// 	}
	// }
	cout<<ans<<"\n";
}
int main(){

	solve();

return 0;
}
