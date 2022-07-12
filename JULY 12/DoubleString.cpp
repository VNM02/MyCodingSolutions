#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	vector<string> vec;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		vec.push_back(s);
	}
	int arr[n];
	vector<string> bigvec;
	for(int i=0;i<n;i++)
	{
		string s1=vec[i];
		for(int k=0;k<n;k++)
		{
		string s2=vec[k];
		int n1=s1.length();
		int n2=s2.length();
		if(n1+n2<=8)
		{
        string s3=s1+s2;
		string s4=s2+s1;
		bigvec.push_back(s3);
		bigvec.push_back(s4);
		}
	
		}
	}
	
    vector<string>::iterator ip;
	 ip = unique(bigvec.begin(),bigvec.end());
	 bigvec.resize(distance(bigvec.begin(), ip));
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	    string s2=vec[i];
		int n2=s2.length();
		if(n==1)
		{
			arr[i]=0;
		}
		else
		{
			for(int k=0;k<bigvec.size();k++)
		{
			string s1=bigvec[k];
			
			int n1=s1.length();
			
			if(n1==n2)
			{
				if(vec[i]==bigvec[k])
			{
				arr[i]=1;
				break;
			}	
			}
			
			// cout<<bigvec[k]<<" ";
		}
		}
		
		
		cout<<arr[i];
	}
	cout<<"\n";
}
return 0;
}