class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;

        for(int i=0;i<n;i++){
            string ch=tokens[i];
            if(ch=="+" || ch=="/" || ch=="*" || ch=="-" ){
                int b=st.top();st.pop();
                int a=st.top();st.pop();
                int res;
                if(ch=="+")res=a+b;
                if(ch=="-")res=a-b;
                if(ch=="*")res=a*b;
                if(ch=="/")res=a/b;

                st.push(res);
            }else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};



