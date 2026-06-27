class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        int p=1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }else{
                p*=nums[i];
            }
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(zero>1){
                res.push_back(0);
            }
            else if (zero==1){
                if(nums[i]==0){
                    res.push_back(p);
                }else{
                    res.push_back(0);
                }
            }else{
                res.push_back(p/nums[i]);
            }
        }
        return res;
    }
};


