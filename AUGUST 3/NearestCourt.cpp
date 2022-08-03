#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int x,y;
	    cin>>x>>y;
	    int m=(x+y)/2;
	    int ans=0;
	    if(abs(x-y)==1)
	    {
	        m=x;
	        ans=1;
	    }
	    else
	    {
	        ans=max(abs(x-m),abs(y-m));
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}

