class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int maxi=INT_MIN;
        vector<int>res;
        for(;r<k;r++){
            maxi=max(maxi,nums[r]);
            
        }
        res.push_back(maxi);
        r--;
        while(r < n-1){
            if(nums[l]==maxi){
                maxi = INT_MIN;
                for (int i = l + 1; i <= r; i++) {
                    maxi = max(maxi, nums[i]);
                }
                }
            l++;
            r++;
            maxi=max(maxi,nums[r]);
            cout<<maxi<<" ";
            res.push_back(maxi);
        }
        return res;
    }
};





