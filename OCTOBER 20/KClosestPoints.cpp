class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      priority_queue<pair<int,int>> maxHeap;
        for(int i=0;i<arr.size();i++)
        {
            maxHeap.push({abs(x-arr[i]),arr[i]});
            if(maxHeap.size()>k)
            {
                maxHeap.pop();
            }
        }
        vector<int> vec;
        while(maxHeap.size()>0)
        {
            vec.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
