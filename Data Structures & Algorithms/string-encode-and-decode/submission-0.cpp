class Solution {
public:
// here we are takin a delimiter # to separate out the one string from another and if # is also behaving as a part of original string then we need an another delimiter so we take length of string 


    string encode(vector<string>& strs) {
        string str;
        for(string s:strs){
            str.append(to_string(s.length()));
            str.push_back('#');
            str.append(s);
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i< s.length()){
            int j=i;
            while(s[j]!='#')j++;
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+len;
            res.push_back(s.substr(i,len));
            i=j;
        }
        return res;
    }
};
