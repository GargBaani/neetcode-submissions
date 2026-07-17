class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26,0),f2(26,0);
        for(int i=0;i<s1.length();i++){
            f1[s1[i]-'a']++;
        }
        int n=s1.length();
        int r=0,l=0;
        while(r<s2.length()){
            f2[s2[r]-'a']++;
            if(r-l+1 >n){
                f2[s2[l]-'a']--;
                l++;
            }
            if(f1==f2)return true;
            r++;
        }
        return false;
    }
};
