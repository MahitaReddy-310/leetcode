class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digit_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];

            int ans=nums[i];
            while(ans>0)
            {
                digit_sum+=ans%10;
            ans/=10;
            }

        }
        return abs(sum-digit_sum);
        
    }
};