class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_buying_price = prices[0];
        
        for(int i = 1; i < prices.size(); i++){
            int selling_price = prices[i]; //1
            profit = max(profit,selling_price - min_buying_price); // 0
            min_buying_price = min(min_buying_price,selling_price); //1
        }
        
        return profit;
        
    }
};

//Time complexity: O(N)
//Space complexity: O(1)