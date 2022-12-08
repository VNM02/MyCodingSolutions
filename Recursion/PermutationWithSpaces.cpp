#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve(string inp,string out)
{
	if(inp.length()==0)
	{
		cout<<out<<"\n";
		return ;
	}
	string out1=out+" "+inp[0];
	string out2=out+inp[0];
	inp.erase(inp.begin()+0);
	solve(inp,out1);
	solve(inp,out2);
}
int main(){
string inp="ABC";
string out="";
out.push_back(inp[0]);
inp.erase(inp.begin()+0);
solve(inp,out);
return 0;
}