class Solution {
public:
    int maxDepth(string s) {
        int l=s.length();
        int count=0;
        vector<int> arr; 
        for(int i=0;i<l;i++){
            if(s[i]=='('){
                count++;
                arr.push_back(count);
            }else if(s[i]==')'){
                count--;
            }
        }
        if(arr.empty()) return 0;
        else return *max_element(arr.begin(), arr.end());
    }
};