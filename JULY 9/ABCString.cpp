#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
bool balance(string s)
{
	stack<char> st;
	
	bool check=true;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			st.push(s[i]);
			continue;
		}
		if(s[i]==')')
		{
			if(st.empty())
			{
			
				check=false;
				break;
			}
			else
			{
					st.pop();
			}
		}
	}
	if(st.empty()==false && st.top()=='(')
	{
		check=false;
	}
	return check;
}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	string s;
	cin>>s;
	int l=s.length();
	if(s[0]!=s[l-1])
	{
		int x=s[0]-'A';
		int m=s[l-1]-'A';
		
			int c=0;
			string s2=s;
			for(int i=0;i<l;i++)
			{
				int t=s[i]-'A';

				if(t==x)
				{
					s[i]='(';
					s2[i]='(';
				}
				else if(t==m)
				{
					s[i]=')';
					s2[i]=')';
				}
				else
				{
					s[i]='(';
					s2[i]=')';
				}
				
			}
			bool c1=balance(s);
			bool c2=balance(s2);
			if(c1==true || c2==true)
			{
				cout<<"YES"<<"\n";
			}
			else
			{
				cout<<"NO"<<"\n";
			}
			// cout<<s<<"\n";
			// cout<<s2<<"\n";
	
	}
	else
	{
		cout<<"NO"<<"\n";

	}
}
return 0;
}
