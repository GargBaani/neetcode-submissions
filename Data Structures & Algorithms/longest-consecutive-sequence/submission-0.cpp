class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int ss=INT_MAX;
        int longe=0;
        int cnt=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==ss){
                cnt+=1;
                ss=nums[i];
            }else if(nums[i]!= ss){
                cnt=1;
                ss=nums[i];
            }
            longe=max(longe,cnt);
        }
        return longe;
    }
};
