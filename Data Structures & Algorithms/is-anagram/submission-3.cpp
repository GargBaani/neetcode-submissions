class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length())return false;
        int n=s.length();
        vector<int>v1(26,0),v2(26,0);

        for(int i=0;i<n;i++){
            v1[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            v2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};
