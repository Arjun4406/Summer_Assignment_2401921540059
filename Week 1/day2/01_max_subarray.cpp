class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Sum=0,maxSum=INT_MIN;
        for(int num:nums){
            Sum+=num;
            maxSum=max(Sum,maxSum);
            if(Sum<0){
                Sum=0;
            }
        }
        return maxSum;
        
    }
};