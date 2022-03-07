// https://leetcode.com/problems/maximum-product-subarray/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        int large = nums[0] , small =nums[0];
        int maxsum=nums[0];
        if (n==1)return nums[0];
        for (int i=1;i<n;i++){
          large = max (nums[i] , max(large*nums[i],small * nums[i]));
          small = min (nums[i] , min(large*nums[i],small * nums[i]));
            maxsum = max(maxsum , large);

        }
        return maxsum;
        
    }
};