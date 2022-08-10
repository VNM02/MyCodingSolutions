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
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		vec.push_back(p);
	}

	sort(vec.begin(),vec.end());
	// if(n>2)
	// {
	// 	bool check=false;
	// 		for(int i=0;i<n-1;i++)
	// 		{
	// 			if(vec[i]==vec[i+1])
	// 			{
	// 				swap(vec[0],vec[i]);
	// 				swap(vec[n-1],vec[i+1]);
	// 				check=true;
	// 				break;
	// 			}
	// 		}	
	// 		if(check==false)
	// 		{
	// 			swap(vec[1],vec[n-1]);
	// 		}
	// 		sort(vec.begin()+1,vec.end()-1);
	// 		int p=0;
	// 		for(int i=1;i<n-1;i++)
	// 		{
	// 			if(vec[i]<=vec[0])
	// 			{
	// 				p=i;
	// 			}	
	// 			else
	// 			{
	// 				break;
	// 			}
	// 		}
	// 		if(p>0 && n>3)
	// 		{
	// 			int k=p;
	// 			for(int i=1;i<p;i++)
	// 			{
	// 				if(k<n-1)
	// 				{
	// 						swap(vec[i],vec[k]);
	// 						k++;
	// 				}
					
	// 			}
	// 		}
	// }
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<vec[i]<<" ";
	// }
	// cout<<"\n";
    int mi=2e9;
	int ind=-1;
	for(int i=1;i<n;i++)
	{
		if(abs(vec[i]-vec[i-1])<mi)
		{
			mi=abs(vec[i]-vec[i-1]);
			ind=i;
		}
	}
	vector<int> chote,bade;
	for(int i=0;i<n;i++)
	{
		if(i==ind || i==ind-1)
		{
			continue;
		}
		if(vec[i]>vec[ind-1])
		{
			bade.push_back(vec[i]);
		}
		if(vec[i]<=vec[ind])
		{
			chote.push_back(vec[i]);
		}
	}
	cout<<vec[ind-1]<<" ";
	for(int i=0;i<bade.size();i++)
	{
		cout<<bade[i]<<" ";
	}
	for(int i=0;i<chote.size();i++)
	{
		cout<<chote[i]<<" ";
	}
	cout<<vec[ind]<<"\n";

}
return 0;
}