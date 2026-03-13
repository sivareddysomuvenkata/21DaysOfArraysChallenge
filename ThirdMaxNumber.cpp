class Solution {
public:
    int thirdMax(vector<int>& nums) {

       long first = LONG_MIN;
        long second = LONG_MIN;
         long third = LONG_MIN;

         for(int n: nums){
            if(n == first || n == second || n == third)
            continue;
            if(first < n){
                third = second;
                second = first;
                first = n;
            }else if(second < n){
                third = second;
                second = n;
            }else if (third < n){
                third = n;
            }
         }
         if(third == LONG_MIN){
            return first;
         }else{
            return third;
         }

    }
};
