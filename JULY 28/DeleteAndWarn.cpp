#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
    vector<pair<int,int> > deleteAndEarn(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int> > vec;
        map<int,int>:: iterator  it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            vec.push_back(make_pair(it->first,it->second));
        }
        sort(vec.begin(),vec.end(),cmp);
        return vec;
    }
	int ansofq(vector<pair<int,int> > v)
	{
		int p=0;
         for(int i=v.size()-1;i>=0;i++)
		 {
			if(v.size()==0)
			{
				break;
			}
			if(v[i].second!=-1)
			{
            p+=v[i].first*(v[i].second);
			v[i.]
		    v.pop_back();
			for(int j=0;j<v.size();j++)
			{
                   if(a==v[j].first)
				   {
					v[j].second=-1;
				   }
			}
			for(int j=0;j<v.size();j++)
			{
                   if(b==v[j].first)
				   {
					v[j].second=-1;
				   }
			}
			}
			
		 }
		 return p;
	}
int main(){
vector<int> vec={2,2,3,3,3,4};
vector<pair<int,int> > vect=deleteAndEarn(vec);
for(int i=0; i<vect.size(); i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
	int ans=ansofq(vect);
	cout<<ans;
return 0;
}
