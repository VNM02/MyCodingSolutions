#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,i,j,f;
	string s;
	cin>>s;
	bool invalidnum = false;
	bool strtone = false,invalidfour = false;
	if(s[0]!='1') strtone = true;
	
	for(i=0;i<s.length();i++){
		if(s[i] != '4' and s[i] != '1') {
			invalidnum = true;
			break;
		}
		if(s[i]=='4'){
			if(s[i+1]=='4' and s[i+2]=='4'){
				invalidfour = true;
				break;
			}
		}
		
	}

	if(invalidnum || invalidfour||strtone) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	
	
	
	
return 0;
}
 







