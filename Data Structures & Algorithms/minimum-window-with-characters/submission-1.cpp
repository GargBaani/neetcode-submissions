class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty())return "";
        map<char,int>f1,f2;

        for(int i=0;i<t.length();i++){
            f2[t[i]]++;
        }
        int need=f2.size();
        int have=0;
        pair<int,int>res={-1,-1};
        int resLen=INT_MAX;

        int l=0;
        for(int r=0;r<s.length();r++){
            char ch=s[r];
            f1[ch]++;
            if(f2.count(ch) && f1[ch]==f2[ch]){
                have++;
            }
            while(have==need){
                if(r-l+1 < resLen ){
                    resLen=r-l+1;
                    res={l,r};
                }
                f1[s[l]]--;
                if(f2.count(s[l]) && f1[s[l]]< f2[s[l]] ){
                    have--;
                }
                l++;
            }
        }
        return resLen==INT_MAX ? "" : s.substr(res.first,resLen);
    }
};
