class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;

        int maxL=0,maxR=0;
        int tot=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(maxL<height[l]){
                    maxL=height[l];
                }else{
                    tot+=(maxL-height[l]);
                }
                l++;
            }else{
                if(maxR<height[r]){
                    maxR=height[r];
                }else{
                    tot+=(maxR-height[r]);
                }
                r--;
            }
        }
        return tot;
    }
};
