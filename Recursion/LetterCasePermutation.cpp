#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve(string inp,string out)
{
	if(inp.size()==0)
	{
		cout<<out<<"\n";
		return ;
	}
	char ch=inp[0];
	if(isalpha(ch))
	{
		string out1=out;
		out1.push_back(tolower(ch));
		string out2=out;
		out2.push_back(toupper(ch));
	inp.erase(inp.begin()+0);
	solve(inp,out1);
	solve(inp,out2);
	}
	else
	{
		inp.erase(inp.begin()+0);
		string out1=out;
		out1.push_back(ch);
		solve(inp,out1);
	}
}
int main(){
string inp;
cin>>inp;
solve(inp,"");
return 0;
}
