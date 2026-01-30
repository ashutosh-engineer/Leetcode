class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        //Find the largest first
        int n=nums.size();
        int largest=0;
        int index=0;
        for(int i=0; i<n; i++){
            if(nums[i]>largest){
                largest=nums[i];
                index=i;
            }
        }

        //Now check for the if it is the twice of the every element or not;
        for(int i=0;i<n;i++){
            if(i!=index && largest <2*nums[i]){
                return -1;
            }
        }
        return index;
    }
};