class Solution {
public:
    int minSetSize(vector<int>& arr) {
       map<int,int> mp;
       for(int i=0;i<arr.size();i++)
       {
           mp[arr[i]]++;
       } 
      priority_queue<int> maxHeap;
      for(auto i:mp)
      {
          maxHeap.push(i.second);
      }
      int sum=0,c=0;
      while(sum<arr.size()/2)
      {
          sum+=maxHeap.top();
          maxHeap.pop();
          c++;
      }
      return c;
    }
};
