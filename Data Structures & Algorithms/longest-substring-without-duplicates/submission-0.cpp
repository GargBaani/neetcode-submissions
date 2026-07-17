class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int temp[256];
        int maxi=0;
        for(int i=0;i<256;i++)temp[i]= -1;
        int l=0,r=0;
        while(r<n){
            char ch=s[r];
            if(temp[s[r]]!=-1){
                l=max(temp[s[r]]+1,l);
            }
                int len=r-l+1;
                maxi=max(maxi,len);
                temp[s[r]]=r;
                r++;
            
        }
        return maxi;
    }
};
