class TimeMap {
public:
    unordered_map<string,map<int,vector<string>>>mpp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mpp[key][timestamp].push_back(value);
    }
    
    string get(string key, int timestamp) {
        if(mpp.find(key)==mpp.end())return "";
        int val=0;
        for(auto [t,v]:mpp[key]){
            if(t<=timestamp){
                val=max(val,t);
            }
        }
        if(val==0){
            return "";
        }
        return mpp[key][val].back();
    }
};
