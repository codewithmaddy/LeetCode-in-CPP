class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int max = nums[0],sum = nums[0];
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]<nums[i+1])
            {
                sum += nums[i+1];
                if(sum > max)
                {
                    max = sum;
                }
            }
            else
            {
                sum = nums[i+1];
            }
        }
        return max;
    }
};
