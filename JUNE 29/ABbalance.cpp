#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	string s;
	cin>>s;
	int c1,c2;
	int n=s.length();	
	if(s[0]==s[n-1])
	{
			cout<<s<<"\n";
	}
     else{
        if (s[0] == 'a')
        {
            s[0]='b';
        }
        else
        {
            s[0]='a';
        }
			cout<<s<<"\n";
    }

}
return 0;
}
