class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=speed.size();
        vector<pair<int,double>>time;
        for(int i=0;i<n;i++){
            double t= (double)(target-position[i])/speed[i];
            time.push_back({position[i],t});
        }
        sort(time.begin(),time.end());
        int feet=0;
        double x=0;
        for(int i=n-1;i>=0;i--){
            if(time[i].second > x){
                feet++;
                x=time[i].second;
            }
        }
        return feet;
    }
};
