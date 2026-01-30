class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int smallest_sum = 0;
        int largest_sum = 0;

        // sum of k smallest
        for(int i = 0; i < k; i++){
            smallest_sum += nums[i];
        }

        // sum of k largest
        for(int i = n - k; i < n; i++){
            largest_sum += nums[i];
        }

        return abs(largest_sum - smallest_sum);
    }
};
