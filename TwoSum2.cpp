class Solution {
public:
      int search(vector<int>& nums, int target,int s,int e) {
         int n=nums.size();
        int start=s, end=e, mid;
        while(start<=end){
            mid=start+((end-start)/2);
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& vec, int target) {
      int n = vec.size();
        
        int l = 0;
        int r = n-1;
        
        while(l < r){
            int sum = vec[l] + vec[r];
            
            if(sum == target) return {l+1,r+1};
            
            if(sum < target) l++;
            else r--;
        }
        
        return {0,1};
    }
};
