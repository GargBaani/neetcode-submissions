class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;

        map<int,int>mpp;
        // mpp[0]=1;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(mpp.find(rem)!=mpp.end()){
                res.push_back(mpp[rem]);
                res.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return res;
    }
};
