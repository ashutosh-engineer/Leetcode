class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int currsum=0;
        int maxsum=0;
        for(int i=0;i<n; i++){
            if(nums[i]==1){
                currsum++;
                maxsum=max(maxsum ,currsum);
            }else{
                currsum=0;
            }

        }
        return maxsum;
    }
};