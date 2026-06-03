class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0;
       int right=nums.size()-1;
       int i=nums.size()-1;
       vector<int> sq_nums(nums.size());
       while(left<=right){
        int l_sq=nums[left]*nums[left];
        int r_sq=nums[right]*nums[right];
        if(l_sq<r_sq) {
            sq_nums[i]=r_sq;
            right--;
        }
        else{
            sq_nums[i]=l_sq;
            left++;
        }
        
        i--;
       } 
       return sq_nums;
    }
};