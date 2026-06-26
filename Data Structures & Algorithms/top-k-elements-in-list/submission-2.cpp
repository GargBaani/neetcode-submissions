class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<pair<int,int>>q;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            q.push({it.second,it.first});
        }
        vector<int>res;
        while(k--){
            res.push_back(q.top().second);
            q.pop();
            // k--;
        }
        return res;
    }
};
