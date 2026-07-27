class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mpp;
        vector<int>res;
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            if(mpp.find(req)!=mpp.end()){
                res.push_back(i);
                res.push_back(mpp[req]);
            }
            mpp[nums[i]]=i;
        }sort(res.begin(),res.end());
        return res;
    }
};
