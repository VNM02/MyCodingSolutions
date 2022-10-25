class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;
         set <vector<int> > st;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0)
            {
                if(nums[i]==nums[i-1])
                {
                    continue;
                }
            }
            vector<int> vec=twoSum(nums,(0-nums[i]),i);
            if(vec.size()>=2)
            {
                for(int j=0;j<vec.size();j+=2)
                {
                    vector<int> p;
                    p.push_back(nums[i]);
                    p.push_back(nums[vec[j]]);
                    p.push_back(nums[vec[j+1]]);
                    st.insert(p);
                }
            }
        }
        for(auto itr=st.begin();itr!=st.end();itr++)
        {
            ans.push_back(*itr);
        }
        return ans;
    }
        vector<int> twoSum(vector<int>& nums, int target,int b) {  
      
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=b+1;i<nums.size();i++)
        {
            int k=target-nums[i];
            if(mp.find(k)!=mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[k]);
            }
            mp[nums[i]]=i;
        }
        return ans; 
     }
};
