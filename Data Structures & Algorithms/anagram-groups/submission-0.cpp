class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>res;
        vector<bool> vis(n, false);
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            vis[i]=true;
            map<char,int>mpp1;
            vector<string>temp;
            temp.push_back(strs[i]);
            for(char ch:strs[i]){
                mpp1[ch]++;
            }
            for(int j=i+1;j<n;j++){
                map<char,int>mpp2;
                for(char ch:strs[j]){
                mpp2[ch]++;
            }
            if(mpp1==mpp2 && vis[j]!=true){
                vis[j]=true;
               temp.push_back(strs[j]);
            }
            }
            res.push_back(temp);
        }
        return res;
    }
};
