class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices[0];
        int m = 0;
        
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < s)
                s = prices[i];
            else
                m = max(m, prices[i] - s);
        }

        return m;
    }
};