class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1,flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                flag++;
                continue;
            }
            else
            {
                 prod*=nums[i];
            }
           
        }
        if(flag>1)
        {
            prod=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(flag>0 && nums[i]!=0)
            {
                nums[i]=0;
            }
            else
            {
                if(nums[i]==0)
                 nums[i]=prod;
                else
                {
                    nums[i]=prod/nums[i];
                }
            }
           
           
        }
        return nums;
    }
};
