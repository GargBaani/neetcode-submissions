class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0],prof=INT_MIN;
        for(int i=1;i<n;i++){
            int val=prices[i]-buy;
            prof=max(prof,val);
            buy=min(buy,prices[i]);
        }
        if(prof<0)return 0;
        return prof;
    }
};
