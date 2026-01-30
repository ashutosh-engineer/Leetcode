class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumarray=0;
        long long int total_sum=0;
        int n=nums.size();
        for(int i=0;i<n; i++){
            sumarray+=nums[i];
        }
        total_sum=n*(n+1)/2;
        return total_sum-sumarray;
    }
};