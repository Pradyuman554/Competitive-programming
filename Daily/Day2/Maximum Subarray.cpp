class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best=INT_MIN, sum=0;
        for(int j=0; j<n; j++){
            sum = max(nums[j], sum + nums[j]);
            best = max(best, sum);
        }
        return best;
    }
};