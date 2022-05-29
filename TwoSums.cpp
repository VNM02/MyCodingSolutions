#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
        vector <int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            if(mp.find(k)!=mp.end())
            {
                ans.push_back(mp[k]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
int main()
{
	Solution obj;
	vector<int> vec={2,7,11,15};
	vector<int> p=obj.twoSum(vec,9);
	 vector<int>::iterator itr;
	 int c=0;
    for( itr=p.begin();itr!=p.end();itr++)
	{
		
		cout<<*itr<<"\n";
	}
	return 0;
}