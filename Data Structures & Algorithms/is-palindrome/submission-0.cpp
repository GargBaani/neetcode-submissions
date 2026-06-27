#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(char ch){
        if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'|| ch>='0' &&ch<='9' ))return true;
        return false;
    }
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;

        while(i<=j){
            while(i<j &&isValid(s[i])==false)i++;
            while(i<j &&isValid(s[j])==false)j--;
            // if(s[i]>='A' && s[i]<='Z')s[i]=s[i]-'A'+'a';
            if(tolower(s[i])!= tolower(s[j]))return false;
            i++;
            j--;
        }
        return true;
    }
};
