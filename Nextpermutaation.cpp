class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        

        int n = nums.size();
        int pivit = -1;

        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                pivit = i;
                break;

            } 

        }
        if(pivit != -1){
        for(int i = n-1; i > pivit; i--){
            if(nums[i] > nums[pivit]){
                swap(nums[i], nums[pivit]);
                break;
            }
        }
        }
      reverse(nums.begin()+pivit+1, nums.end());
    }
};
