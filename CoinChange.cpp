class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int > arr(amount+1, amount+1);

        arr[0] = 0;

        for(int i = 1; i <= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if(coins[j] <= i){
                    arr[i] = min(arr[i], arr[i - coins[j]] + 1);
                }
            }
        }
        if(arr[amount] == amount+1){
            return -1;
        }
        return arr[amount];
    }
};
