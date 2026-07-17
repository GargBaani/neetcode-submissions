class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0,r=0,res=0,maxi=0;
        map<char,int>mpp;
        while(r<n){
            mpp[s[r]]++;
            maxi=max(maxi,mpp[s[r]]);
            int wid=r-l+1;
            if(wid-maxi >k){
                mpp[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};
