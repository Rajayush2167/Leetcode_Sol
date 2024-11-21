class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        double currSum= 0;
        double maxSum = 0;
        for (int i=0; i<k; i++){
            currSum= currSum + nums[i];
            maxSum = currSum;
        }
        for(int i=k; i<n; i++){
            currSum = currSum + nums[i] - nums[i-k];
            maxSum = max(currSum, maxSum);
        }
        return maxSum/k;
        
    }
};