class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mpp1;
        for (char ch:s){
            mpp1[ch]++;
        }
        map<char,int>mpp2;
        for (char ch:t){
            mpp2[ch]++;
        }
        for(char ch:t){
            if(mpp1.find(ch)!=mpp1.end()){
                mpp1[ch]--;
                if(mpp1[ch]==0)mpp1.erase(ch);
            }
        }
        for(char ch:s){
            if(mpp2.find(ch)!=mpp2.end()){
                mpp2[ch]--;
                if(mpp2[ch]==0)mpp2.erase(ch);
            }
        }
        return (mpp1.empty() && mpp2.empty());
    }
};
