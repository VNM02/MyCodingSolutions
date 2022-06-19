#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
string s,ans;
cin>>s;
int len=s.length();
for(int i=0;i<len;i++){
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
		continue;
	else
	{
		ans+='.';
	ans+=towlower(s[i]);
	}
 
 
 
}
cout<<ans;
return 0;
}

 
 
 
 
