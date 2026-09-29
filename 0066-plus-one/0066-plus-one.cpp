class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> o;
        digits.back()=digits.back()+1;
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] == 10) {
                digits[i] = 0;
                if(i == 0) {
                    o.push_back(1);
                } else {
                    digits[i - 1]++;
                }
            }
        }
        for(int i=0;i<digits.size();i++){
            o.push_back(digits[i]);
        }
        return o;
    }
};