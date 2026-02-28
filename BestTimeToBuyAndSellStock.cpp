class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minprice= INT_MAX;
        int maxpro = 0;

        for(int i = 0; i < n; i++){
            if(minprice > prices[i]){
                minprice = prices[i];
            }else if(prices[i] - minprice > maxpro){
                maxpro = prices[i] - minprice;
            }

        }
        return maxpro;
        
    }
};
