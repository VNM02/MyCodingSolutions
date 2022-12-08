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
	inp.erase(inp.begin()+0);
	string out1=out+ch;
	solve(inp,out1);
	if((int)(ch)>=97 && (int)(ch)<=122)
	{
		string out2=out;

		out2.push_back(toupper(ch));
		solve(inp,out2);
	}
	else
	{
		string out2=out;
				out2.push_back(tolower(ch));
		solve(inp,out2);
	}
}
int main(){
string inp;
cin>>inp;
solve(inp,"");
return 0;
}