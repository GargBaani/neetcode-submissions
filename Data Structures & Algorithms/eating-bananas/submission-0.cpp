class Solution {
public:
    int cntHrs(int mid,vector<int>&piles){
        int h=0;
        for(int i=0;i<piles.size();i++){
            h+=ceil((double)piles[i]/mid);
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        int r=maxi;
        int ans=0;

        while(l<=r){
            int mid=l+(r-l)/2;
            int val=cntHrs(mid,piles);

            if(val<=h){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
