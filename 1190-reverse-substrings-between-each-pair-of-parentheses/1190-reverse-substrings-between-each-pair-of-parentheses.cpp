class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                int a=st.top();
                st.pop();
                reverse(s.begin()+a+1,s.begin()+i);
            }
        }
        string a="";
        for(char c:s){
            if(c!='('&&c!=')'){
                a+=c;
            }
        }
        return a;
    }
};